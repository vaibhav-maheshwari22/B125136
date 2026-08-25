#include <iostream>
using namespace std;

class Processor {
public:
    void process(int a, int b) {
        cout << "product of two ints " << (a * b) << endl;
    }

    void process(int a, float b) {
        cout << "product of int and float " << (a * b) << endl;
    }

    void process(float a, float b) {
        cout << "product of two floats " << (a * b) << endl;
    }

    void process(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++)
             sum += arr[i];

        cout << "sum of array elements " << sum << endl;
    }

    void process(int *a, int *b) {
        cout << "difference using pointers " << (*a - *b) << endl;
    }
};

int main() {
    Processor p;
    int x, y, n;
    float a, b;

    cout << "enter two integers ";
    cin >> x >> y;
    p.process(x, y);

    cout << "enter one int and one float ";
    cin >> x >> a;
    p.process(x, a);

    cout << "enter two floats ";
    cin >> a >> b;
    p.process(a, b);

    cout << "enter size of array ";
    cin >> n;
    int arr[n];
    
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> arr[i];

    p.process(arr, n);

    cout << "enter two ints for pointer operation ";
    cin >> x >> y;
    p.process(&x, &y);

    return 0;
}