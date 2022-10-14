#include <iostream>
#include <fstream>

using namespace std;

bool is_file_exist(string file_name)
{
    ifstream file(file_name.c_str());
    if (file.is_open())
    {
        file.close();
        return true;
    }
    else return false;
}

void create_new_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        cout << "File already exists" << endl;
        cout << "Do you want to overwrite it? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'y')
        {
            system(("rm " + file_name).c_str());
            system(("touch " + file_name).c_str());
            cout << "File created" << endl;
        }
        else
        {
            cout << "File not created" << endl;
        }
    }
    else
    {
        ofstream file{file_name};
        if (file.is_open())
        {
            cout << "File created" << endl;
        };
        file.close();
    }
}

void write_to_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        cout << "You want to override or append to file? (o/a): ";
        char choice;
        cin >> choice;
        if (choice == 'o')
        {
            ofstream file{file_name};
            if (file.is_open())
            {
                cout << "Enter text: ";
                string text;
                cin.ignore();
                getline(cin, text);
                file << text;
                cout << "Text written to file" << endl;
            }
            file.close();
        }
        else if (choice == 'a')
        {
            ofstream file{file_name, ios::app};
            if (file.is_open())
            {
                cout << "Enter text: ";
                string text;
                cin.ignore();
                getline(cin, text);
                file << text;
                cout << "Text written to file" << endl;
            }
            file.close();
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void rename_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        cout << "Enter new file name: ";
        string new_file_name;
        cin >> new_file_name;
        if (rename(file_name.c_str(), new_file_name.c_str()) == 0)
        {
            cout << "File renamed" << endl;
        }
        else
        {
            cout << "Error renaming file" << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void remove_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        if (remove(file_name.c_str()) == 0)
        {
            cout << "File removed" << endl;
        }
        else
        {
            cout << "Error removing file" << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void copy_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        cout << "Enter new file name: ";
        string new_file_name;
        cin >> new_file_name;
        if (is_file_exist(new_file_name.c_str()))
        {
            cout << "File already exists" << endl;
            cout << "Do you want to overwrite it? (y/n): ";
            char choice;
            cin >> choice;
            if (choice == 'y')
            {
                system(("rm " + new_file_name).c_str());
                system(("cp " + file_name + " " + new_file_name).c_str());
                cout << "File copied" << endl;
            }
            else
            {
                cout << "File not copied" << endl;
            }
        }
        else
        {
            system(("cp " + file_name + " " + new_file_name).c_str());
            cout << "File copied" << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}

void move_file(string file_name)
{
    if (is_file_exist(file_name.c_str()))
    {
        cout << "Enter new file name: ";
        string new_file_name;
        cin >> new_file_name;
        cout << "Enter new directory: ";
        string new_dir;
        cin >> new_dir;
        if (is_file_exist((new_dir+"/"+new_file_name).c_str()))
        {
            cout << "File already exists" << endl;
            cout << "Do you want to overwrite it? (y/n): ";
            char choice;
            cin >> choice;
            if (choice == 'y')
            {
                system(("rm " + new_dir+"/"+new_file_name).c_str());
                system(("mv " + file_name + " " + new_dir + "/" + new_file_name).c_str());
                cout << "File moved" << endl;
            }
            else
            {
                cout << "File not moved" << endl;
            }
        }
        else
        {
            system(("mv " + file_name + " " + new_dir + "/" + new_file_name).c_str());
            cout << "File moved" << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
}

int main(int argc, char const *argv[])
{
    // create_new_file("test.txt");
    // write_to_file("test.txt");
    // rename_file("test.txt");
    // remove_file("test.txt");
    // copy_file("tets.txt");
    // move_file("test.txt");
    return 0;
}