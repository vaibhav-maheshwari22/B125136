#include <iostream>
using namespace std;

class Counter {
public:
    void count(int n) {
        int cnt = 0, temp = n;
        if (temp == 0) cnt = 1;

        while (temp != 0) {
            cnt++;
            temp /= 10;
        }

        cout << "number of digits " << cnt << endl;
    }

    void count(int arr[], int n) {
        cout << "number of elements in array " << n << endl;
    }

    void count(char arr[], int n, char ch) {
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == ch) cnt++;
        }

        cout << "occurrences of character " << cnt << endl;
    }
};

int main() {
    Counter c;
    int num, n;
    char ch;

    cout << "enter an integer ";
    cin >> num;
    c.count(num);

    cout << "enter size of int array ";
    cin >> n;
    int a[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> a[i];

    c.count(a, n);

    cout << "enter size of char array ";
    cin >> n;
    char b[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++) 
        cin >> b[i];

    cout << "enter char to count ";
    cin >> ch;
    c.count(b, n, ch);

    return 0;
}