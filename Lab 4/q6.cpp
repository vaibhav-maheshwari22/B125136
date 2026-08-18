#include <iostream>
using namespace std;

class Door {
private:
    int n;
    bool islock;

public:
    void get() {
        cout << "enter door number: ";
        cin >> n;
        cout << "is door locked? (1 for Locked, 0 for Unlocked): ";
        cin >> islock;
    }
    friend class SecuritySystem;
};


class SecuritySystem {
public:
    void checkLockStatus(Door &d) {
        cout << "Door number: " << d.n << endl;
        if (d.islock) {
            cout << "Status locked" << endl;
        } else {
            cout << "Status  unlocked" << endl;
        }
    }
};


int main() {
    Door d;
    d.get();
    SecuritySystem sys;
    sys.checkLockStatus(d);
    return 0;
}