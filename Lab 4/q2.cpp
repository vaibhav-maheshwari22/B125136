#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int battery;

public:
    void get() {
        cout << "enter brand: ";
        getline(cin, brand);
        cout << "enter model: ";
        getline(cin, model);
        cout << "enter battery percentage: ";
        cin >> battery;
    }
    friend void checkBattery(Mobile &m);
};

void checkBattery(Mobile &m) {
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery percentage: " << m.battery << "%" << endl;
    if (m.battery < 20) {
        cout << "Battery low" << endl;
    } else {
        cout << "Battery normal" << endl;
    }
}

int main() {
    Mobile m;
    m.get();
    checkBattery(m);
    return 0;
}