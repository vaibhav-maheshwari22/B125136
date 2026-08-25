#include <iostream>
using namespace std;

class Comparison {
public:
    void findMax(int a, int b) {
        if (a > b)
             cout << "larger integer is " << a << endl;
        else 
            cout << "larger integer is " << b << endl;
    }

    void findMax(float a, float b) {
        if (a > b)
             cout << "larger float is " << a << endl;
        else 
            cout << "larger float is " << b << endl;
    }

    void findMax(int a, int b, int c) {
        if (a >= b && a >= c)
             cout << "largest integer is " << a << endl;
        else if (b >= a && b >= c) 
            cout << "largest integer is " << b << endl;
        else
             cout << "largest integer is " << c << endl;
    }
};

int main() {
    Comparison comp;
    int a, b, c;
    float x, y;

    cout << "enter two integers ";
    cin >> a >> b;
    comp.findMax(a, b);

    cout << "enter two floating point numbers ";
    cin >> x >> y;
    comp.findMax(x, y);

    cout << "enter three integers ";
    cin >> a >> b >> c;
    comp.findMax(a, b, c);

    return 0;
}