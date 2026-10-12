#include <iostream>
using namespace std;

class Calculator {
public:
    int a = 20, b = 10;

    void calculate() {
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;
        cout << "Division = " << a / b;
    }
};

int main() {
    Calculator c;
    c.calculate();

    return 0;
}