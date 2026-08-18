#include <iostream>
#include <string>
using namespace std;

class SmartDevice{
    private:
    string name;
    string type;
    bool status;

public:
    void get() {
        cout << "Enter device name: ";
        getline(cin, name);
        cout << "Enter device type: ";
        getline(cin, type);
        cout << "Enter initial power status (1 for ON, 0 for OFF): ";
        cin >> status;
    }
    friend class HomeController;
};

class HomeController {
public:
    
void display(SmartDevice &d) {
    
    cout << "Device name: " << d.name << endl;
    cout << "Device type: " << d.type << endl;
    cout << "Power status: " << (d.status ? "ON" : "OFF") << endl;
}

void turnOn(SmartDevice &d) {
    d.status = true;
    cout << d.name << " is now turned ON" << endl;
}

void turnOff(SmartDevice &d) {
    d.status = false;
    cout << d.name << " is now turned OFF" << endl;
}

void displaystatus(SmartDevice &d) {
    cout << "Power status of " << d.name << ": " << (d.status ? "ON" : "OFF") << endl;
}
};



int main() {
    SmartDevice dev;
    dev.get();
    HomeController hc;
    
    hc.display(dev);
    hc.turnOn(dev);
    hc.displaystatus(dev);
    hc.turnOff(dev);
    hc.displaystatus(dev);
    return 0;
}