#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Nhap mot so bat ky: ";
    int num;
    cin >> num;

    // if else
    if (num > 0)
    {
        cout << num << " la mot so duong." << endl;
    }
    else if (num < 0)
    {
        cout << num << " la mot so am." << endl;
    }
    else
    {
        cout << num << " la so khong" << endl;
    }

    // switch case
    switch (num)
    {
    case 14:
        cout << num << " trung giai nhat." << endl;
        break;
    case 25:
    case 52:
        cout << num << " trung giai nhi." << endl;
        break;
    case 82:
    case 12:
    case 28:
        cout << num << " trung giai ba." << endl;
        break;
    default:
        cout << num << " khong trung giai." << endl;
        break;
    }

    // for - tinh tong N so nguyen duong dau tien
    int n = 0, sum = 0;
    cout << "Nhap so N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Tong cua " << n << " so nguyen duong dau tien la: " << sum << endl;

    // while - tinh tong cac so chan <N
    int i = 0;
    int odd_sum = 0;
    while (i < n)
    {
        if (i%2 ==0) 
        {
            odd_sum += i;
            i+=2;
        }
    }
    cout << "Tong cac so chan nho hon " << n << " la: " << odd_sum << endl;
    
    return 0;
}
