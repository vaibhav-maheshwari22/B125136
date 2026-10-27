#include <iostream>

using namespace std;

class Delivery {
public:
    virtual void estimateTime(double dist) {}
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double dist) override {
        double t = (dist / 20.0) * 60.0 + 5.0;
        cout << "Bike delivery time: " << t << " mins" << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double dist) override {
        double t = (dist / 40.0) * 60.0 + 2.0;
        cout << "Drone delivery time: " << t << " mins" << endl;
    }
};

int main() {
    BikeDelivery b;
    DroneDelivery d;
    b.estimateTime(10.0);
    d.estimateTime(10.0);
    return 0;
}