#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    int *p,*q;

    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    cout<<"after swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}//pointer concept
