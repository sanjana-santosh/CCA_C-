#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student s;
    cout<<"Enter roll number:"<<endl;
    cin>>s.rollNo;
    cout<<"Enter name:"<<endl;
    cin>>s.name;
    cout<<"Enter marks:"<<endl;
    cin>>s.marks;

    cout<<"\n--- Student Details ---"<<endl;
    cout<<"Roll Number:"<<s.rollNo<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Marks:"<<s.marks<<endl;
}//structure concept