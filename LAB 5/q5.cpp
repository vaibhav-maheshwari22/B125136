#include <iostream>
using namespace std;

class Modifier {
public:
    void modify(int a, int val) {
        cout << "original int " << a << endl;
        a += val;
        cout << "modified int " << a << endl;
    }

    void modify(float a, float val) {
        cout << "original float " << a << endl;
        a += val;
        cout << "modified float " << a << endl;
    }

    void modify(int *a, int val) {
        cout << "original pointer val " << *a << endl;
        *a += val;
        cout << "modified pointer val " << *a << endl;
    }
};

int main() {
    Modifier m;
    int x, val1;
    float y, val2;

    cout << "enter integer and value to add ";
    cin >> x >> val1;
    m.modify(x, val1);

    cout << "enter float and value to add ";
    cin >> y >> val2;
    m.modify(y, val2);

    cout << "enter integer to modify using pointer and value to add ";
    cin >> x >> val1;
    m.modify(&x, val1);

    return 0;
}