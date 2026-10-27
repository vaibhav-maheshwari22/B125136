#include <iostream>

using namespace std;

class SecurityScanner {
public:
    virtual void scan(int t) {}
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int t) override {
        cout << "Basic Scanner - Threats detected: " << t << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int t) override {
        double rem = t * 0.1;
        cout << "Advanced Scanner - Detected: " << t << ", Remaining: " << rem << endl;
    }
};

int main() {
    BasicScanner bs;
    AdvancedScanner as;
    bs.scan(50);
    as.scan(50);
    return 0;
}