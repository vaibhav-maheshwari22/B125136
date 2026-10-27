#include <iostream>

using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int h) {
        cout << "Fee\n";
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int h) override {
        double total = h * 10.0;
        if (h > 5) total *= 0.9;
        cout << "Two Wheeler Fee: " << total << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int h) override {
        double total = h * 30.0;
        if (h > 5) total *= 0.9;
        cout << "Four Wheeler Fee: " << total << endl;
    }
};

int main() {
    TwoWheelerSlot t;
    FourWheelerSlot f;
    t.calculateFee(6);
    f.calculateFee(6);
    return 0;
}