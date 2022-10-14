#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    string user_name;
    int user_id; 

public:
    string get_user_name();
    int get_user_id();
    void set_user_name(string name);
    void set_user_id(int id);
    void input();
    void print_info();
    User();
    User(string name);
    User(string name, int id);
    ~User();

protected: 
};

int User::get_user_id()
{
    return user_id;
}

string User::get_user_name()
{
    return user_name;
}

void User::set_user_name(string name)
{
    user_name = name;
}

void User::set_user_id(int id)
{
    user_id = id;
}

void User::input()
{
    cout << "User name: ";
    cin >> user_name;
    cout << "User id: ";
    cin >> user_id;
}

User::User()
{
    user_name = "default";
    user_id = 0;
}

User::User(string name)
{
    user_name = name;
    user_id = 0;
}

User::User(string name, int id)
{
    user_name = name;
    user_id = id;
}

User::~User(){}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number of users: ";
    cin >> n;
    User *users = new User[n];
    for (int i = 0; i < n; i++)
    {
        users[i].input();
    }

    cout << "User info: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "User name: " << users[i].get_user_name() << ", user id: " << users[i].get_user_id() << endl;
    }
    return 0;   
}
