#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
private:
    int slot;
    string vehNum;
    bool isoccupy;

public:
    void get() {
        cout << "enter slot number: ";
        cin >> slot;
        cout << "is slot occupied? (1 for Yes, 0 for No): ";
        cin >> isoccupy;
        cin.ignore();
        if (isoccupy) {
            cout << "enter vehicle number: ";
            getline(cin, vehNum);
        } else {
            vehNum = "N/A";
        }
    }
    friend void checkSlot(ParkingSlot &p);
};

void checkSlot(ParkingSlot &p) {
    cout << "Slot number: " << p.slot << endl;
    if (p.isoccupy) {
        cout << "Status  occupied" << endl;
        cout << "Vehicle number: " << p.vehNum << endl;
    } else {
        cout << "Status  available" << endl;
    }
}

int main() {
    ParkingSlot p;
    p.get();
    checkSlot(p);
    return 0;
}