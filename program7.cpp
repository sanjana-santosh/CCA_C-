#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

    void getRoll()
    {
     cout<<"enter roll no:"<<endl;
     cin>>rollNo;
    }
};

class Marks : public Student
{
public:
    int m1, m2;

    void getMarks()
    {
     cout<<"Enter two subject marks:";
     cin>m1>>m2;
    }
};

class Result : public Marks
{
public:
    void display()
    {
     cout<<"RollNo="<<rollNo<<endl;
     cout<<"Total marks="<<m1+m2<<endl;
    }
};

int main()
{
    Result r;
    r.getRoll();
    r.getMarks();
    r.display();
    return 0;
}//multiple inheritance program