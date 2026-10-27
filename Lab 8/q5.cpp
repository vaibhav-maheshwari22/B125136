#include <iostream>

using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double m) {}
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double m) override {
        double water = 2.0 * (100.0 - m);
        cout << "Drip water: " << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double m) override {
        double water = 3.0 * (100.0 - m);
        cout << "Sprinkler water: " << water << " litres" << endl;
    }
};

int main() {
    DripIrrigation drip;
    SprinklerIrrigation spr;
    drip.calculateWater(40.0);
    spr.calculateWater(40.0);
    return 0;
}