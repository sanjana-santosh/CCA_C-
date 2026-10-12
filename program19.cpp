#include <iostream>
using namespace std;

class Traffic {
public:
    int signal;

    void check() {
        cout << "1. Red" << endl;
        cout << "2. Yellow" << endl;
        cout << "3. Green" << endl;

        cout << "Enter Signal: ";
        cin >> signal;

        switch (signal) {
            case 1:
                cout << "STOP";
                break;
            case 2:
                cout << "WAIT";
                break;
            case 3:
                cout << "GO";
                break;
            default:
                cout << "Invalid Signal";
        }
    }
};

int main() {
    Traffic t;
    t.check();
    return 0;
}