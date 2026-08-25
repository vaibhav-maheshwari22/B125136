#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate(int a, int b) {
        cout << "sum of two integers " << (a + b) << endl;
    }

    void calculate(int a, int b, int c) {
        cout << "sum of three integers " << (a + b + c) << endl;
    }

    void calculate(float a, float b) {
        cout << "sum of two floating point numbers " << (a + b) << endl;
    }
};

int main() {
    Calculator calc;
    int a, b, c;
    float x, y;

    cout << "enter two integers ";
    cin >> a >> b;
    calc.calculate(a, b);

    cout << "enter three integers ";
    cin >> a >> b >> c;
    calc.calculate(a, b, c);

    cout << "enter two floating point numbers ";
    cin >> x >> y;
    calc.calculate(x, y);

    return 0;
}