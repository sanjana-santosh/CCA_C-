#include<iostream>
using namespace std;

class addition{
    public:
           int a,b;
        
           void getData(){
            cout<<"Enter two number:"<<endl;
            cin>>a>>b;
           }
           void display(){
            cout<<"Sum="<<a+b<<endl;
           }
};
int main(){
    addition obj;
    obj.getData();
    obj.display();

    return 0;
}