#include <iostream>
#include <cmath>

using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int score) {}
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int score) override {
        int target = score + static_cast<int>(ceil(0.01 * score));
        cout << "T20 Target: " << target << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int score) override {
        int target = score + static_cast<int>(ceil(0.02 * score));
        cout << "ODI Target: " << target << endl;
    }
};

int main() {
    T20Match t20;
    ODIMatch odi;
    t20.calculateTarget(180);
    odi.calculateTarget(280);
    return 0;
}