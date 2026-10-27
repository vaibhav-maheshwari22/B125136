#include <iostream>

using namespace std;

class Character {
public:
    virtual void attack(int s) {
        cout << "Attack\n";
    }
};

class Warrior : public Character {
public:
    void attack(int s) override {
        double dmg = 20.0 + 2.0 * s;
        cout << "Warrior damage: " << dmg << endl;
    }
};

class Archer : public Character {
public:
    void attack(int a) override {
        double dmg = 15.0 + 3.0 * a;
        cout << "Archer damage: " << dmg << endl;
    }
};

int main() {
    Warrior w;
    Archer arch;
    w.attack(10);
    arch.attack(10);
    return 0;
}