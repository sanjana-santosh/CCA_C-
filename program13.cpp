#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int *p, *q, *r;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    p = &a;
    q = &b;
    r = &c;

    if(*p >= *q && *p >= *r)
    {
        cout << "Largest Number: " << *p;
    }
    else if(*q >= *p && *q >= *r)
    {
        cout << "Largest Number: " << *q;
    }
    else
    {
        cout << "Largest Number: " << *r;
    }

    return 0;
}