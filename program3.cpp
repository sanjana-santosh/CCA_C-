#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    int marks[3];
    int total;
    float average;

public:
    void getData()
    {
     cout<<"Enter Student Name:";
     cin>>name;

     cout<<"Enter Roll Number:";
     cin>>rollNo;

     cout<<"Enter marks of 3 subjects:";

       for(int i = 0; i < 3; i++)
       {
         cin>>marks[i];
       }
    }

    void calculate()
    {
        total=0;

        for(int i=0;i<3;i++)
        {
            total+=marks[i];
        }

        average=total/3.0;
    }

    void display()
    {
        cout<<"\n----- Student Result -----"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<rollNo<<endl;
        cout<<"Total Marks:"<<total<<endl;
        cout<<"Average Marks:"<<average<<endl;

        if(average>=90)
            cout<<"Grade: A+" <<endl;
        else if(average >= 75)
            cout<< "Grade: A" <<endl;
        else if(average >= 60)
            cout << "Grade: B" <<endl;
        else if(average >= 40)
            cout<<"Grade: C"<<endl;
        else
            cout<<"Grade: F" <<endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.calculate();
    s1.display();

    return 0;
}