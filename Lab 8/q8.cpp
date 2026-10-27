#include <iostream>

using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double hours) {}
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double hours) override {
        double cost = hours * 5.0;
        if (hours > 100.0) cost *= 0.85;
        cout << "Standard cost: " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double hours) override {
        double cost = hours * 12.0;
        if (hours > 100.0) cost *= 0.85;
        cout << "Premium cost: " << cost << endl;
    }
};

int main() {
    StandardInstance s;
    PremiumInstance p;
    s.calculateCost(120.0);
    p.calculateCost(120.0);
    return 0;
}