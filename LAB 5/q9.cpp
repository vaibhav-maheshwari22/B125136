#include <iostream>
using namespace std;

class MaxFinder {
public:
    void max(int a, int b) {
        if (a > b) 
            cout << "max is " << a << endl;
        else
             cout << "max is " << b << endl;
    }

    void max(int *a, int *b) {
        if (*a > *b) 
            cout << "max using pointers is " << *a << endl;
        else
             cout << "max using pointers is " << *b << endl;
    }

    void max(int *arr, int n) {
        int m = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > m)
                 m = arr[i];
        }

        cout << "max in array is " << m << endl;
    }
};

int main() {
    MaxFinder m;
    int x, y, n;

    cout << "enter two integers ";
    cin >> x >> y;
    m.max(x, y);
    m.max(&x, &y);

    cout << "enter size of array ";
    cin >> n;
    int a[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> a[i];

    m.max(a, n);

    return 0;
}