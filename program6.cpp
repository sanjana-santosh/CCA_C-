#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

    void getRoll()
    {
    cout<<"enter roll number:";
    cin>>rollNo;
    }
};

class Result:public Student
{
public:
    int marks;

    void getMarks()
    {
    cout<<"enter marks:";
    cin>>marks;
    }

    void display()
    {
    cout<<"Roll Number:"<<rollNo<<endl;
    cout<<"Marks:"<<marks<<endl;
    }
};

int main()
{
 Result r;
 r.getRoll();
 r.getMarks();
 r.display();
 
 return 0;
}
//inheritance program