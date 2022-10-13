#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1{""},str2{""},str3{""},result{""};
    cout << "str1: ";
    getline(cin, str1);
    cout << "str2: ";
    getline(cin, str2);
    
    int min = 0;
    if (str1.length() < str2.length()) 
    {
        min = str1.length();
        str3 = str2;
    } else 
    {
        min = str2.length();
        str3 = str1;
    }

    for (int i=0; i < min; i++){
        result = result + str1[i] + str2[i];
    }

    result += str3.substr(min,str3.length()-min);
    // result += str3.substr(min);
    
    cout << result << endl;
    return 0;
}
