#include <iostream>

using namespace std;

class Robot {
public:
    virtual void move(double dist) = 0;
};

class WheeledRobot : public Robot {
public:
    void move(double dist) override {
        double time = dist / 2.0;
        cout << "Wheeled robot time: " << time << "s" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double dist) override {
        double time = dist / 1.2;
        cout << "Tracked robot time: " << time << "s" << endl;
    }
};

int main() {
    WheeledRobot w;
    TrackedRobot tr;
    Robot* r1 = &w;
    Robot* r2 = &tr;
    r1->move(50.0);
    r2->move(50.0);
    return 0;
}