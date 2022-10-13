#include <iostream>

using namespace std;

void swap_int(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{
    int a{0},b{0};
    int *pa = &a, *pb = &b;   //pa la dia chi cua a, *pa la gia tri 
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;


    swap_int(pa,pb);
    cout << *pa << endl;
    cout << pa << endl;
    cout << a << " " << b << endl;
    return 0;
}
