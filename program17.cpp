#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary;
    }
};

int main() {
    Employee e;

    e.name = "Sanjana";
    e.salary = 25000;

    e.display();

    return 0;
}