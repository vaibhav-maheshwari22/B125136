#include <iostream>
using namespace std;

class ArraySum {
public:
    void total(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++)
             sum += arr[i];

        cout << "total of integer array " << sum << endl;
    }

    void total(float arr[], int n) {
        float sum = 0;
        for (int i = 0; i < n; i++)
             sum += arr[i];

        cout << "total of float array " << sum << endl;
    }

    void total(int arr[], int n, int count) {
        int sum = 0;
        for (int i = 0; i < count; i++) 
            sum += arr[i];

        cout << "total of portion " << sum << endl;
    }
};

int main() {
    ArraySum s;
    int n, count;

    cout << "enter size of int array ";
    cin >> n;
    int a[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> a[i];

    s.total(a, n);

    cout << "enter number of elements to sum";
    cin >> count;
    s.total(a, n, count);

    cout << "enter size of float array ";
    cin >> n;
    float b[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> b[i];

    s.total(b, n);

    return 0;
}