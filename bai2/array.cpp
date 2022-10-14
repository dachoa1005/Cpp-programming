#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=0, arrSum=0;
    cout << "Enter N: ";
    cin >> n;
    int myNum[n];
    for (int i=0; i< n; i++)
    {
        cout << "myNum[" << i << "] = ";
        cin >> myNum[i];
        arrSum += myNum[i];
    }
    cout << "Sum of array: " << arrSum << endl;

    return 0;
}

