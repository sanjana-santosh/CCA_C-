#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius;

    void convert() {
        cout << "Enter Celsius: ";
        cin >> celsius;

        float f = (celsius * 9 / 5) + 32;

        cout << "Fahrenheit = " << f;
    }
};

int main() {
    Temperature t;
    t.convert();
    return 0;
}