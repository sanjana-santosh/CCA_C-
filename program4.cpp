#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length,breadth;

public:
    void getData()
    {
    cout<<"enter length and breadth of rectangle:"<<endl;
    cin>>length>>breadth;
    }

    void calculateArea()
    {
    int area=length*breadth;
    cout<<"Area of rectangle="<<area<<endl;
    }
};

int main()
{
    Rectangle r;
    r.getData();
    r.calculateArea();
    return 0;
}//data abstraction program