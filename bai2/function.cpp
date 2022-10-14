#include <iostream>

using namespace std;

int add(int const &a, int &b)
{
    int sum;
    sum = a + b;
    b = 0;
    // a = 0;   fail because a is a const
    return sum;
}

int main(int argc, char const *argv[])
{
    int a{0}, b{0};
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a + b = " << add(a, b) << endl;
    cout << "a = " << a << " ,b = " << b << endl;
    return 0;
}
