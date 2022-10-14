#include <iostream>

using namespace std;

void swap_int(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void update(int x)
{ // pass by value - truyền tham trị
    x = -10;
}

void update2(int &x)
{ // pass by reference - truyền tham chiếu
    x = -20;
}

int main(int argc, char const *argv[])
{
    int a{0}, b{0};
    int *pa = &a, *pb = &b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "After swap_int():" << endl;
    swap_int(pa, pb);
    cout << "a = " << a << ",b = " << b << endl;

    update(a);  // will not change the value of a
    update2(b); // changee the value of b
    cout << "After update() and update2(): " << endl;
    cout << "a = " << a << ",b = " << b << endl;

    return 0;
}
