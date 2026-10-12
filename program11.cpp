#include <iostream>
using namespace std;

int main()
{
    int a[5], i;

    cout << "Enter 5 array elements: ";

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Original Array: ";

    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nReversed Array: ";

    for(i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}