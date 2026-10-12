#include <iostream>
using namespace std;

class Vehicle {
private:
    int days, rent;

public:
    Vehicle() {
        rent = 500;
    }

    void getData() {
        cout << "Enter number of days: ";
        cin >> days;
    }

    void calculate() {
        cout << "Total Rent = Rs." << days * rent;
    }
};

int main() {
    Vehicle v;
    v.getData();
    v.calculate();

    return 0;
}