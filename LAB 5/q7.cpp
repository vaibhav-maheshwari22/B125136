#include <iostream>
using namespace std;

class CompareData {
public:
    void check(int a, int b) {
        if (a > b) 
            cout << "larger int is " << a << endl;
        else 
            cout << "larger int is " << b << endl;
    }

    void check(float a, float b) {
        if (a > b) 
            cout << "larger float is " << a << endl;
        else 
            cout << "larger float is " << b << endl;
    }

    void check(int a[], int b[], int n) {
        bool match = true;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                 match = false; 
                 break; 
            }
        }
        if (match)
             cout << "both arrays are identical" << endl;
        else
             cout << "arrays are not identical" << endl;
    }
};

int main() {
    CompareData c;
    int x, y, n;
    float p, q;

    cout << "enter two integers ";
    cin >> x >> y;
    c.check(x, y);

    cout << "enter two floats ";
    cin >> p >> q;
    c.check(p, q);

    cout << "enter size of arrays ";
    cin >> n;
    int a[n], b[n];
    cout << "enter elements of first array ";
    for (int i = 0; i < n; i++)
         cin >> a[i];

    cout << "enter elements of second array ";
    for (int i = 0; i < n; i++)
         cin >> b[i];

    c.check(a, b, n);

    return 0;
}