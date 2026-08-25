#include <iostream>
using namespace std;

class Display {
public:
    void show(int a) {
        cout << "integer value " << a << endl;
    }

    void show(float a) {
        cout << "float value " << a << endl;
    }

    void show(char a) {
        cout << "char value " << a << endl;
    }

    void show(int arr[], int n) {
        cout << "int array elements ";
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " ";
            
        cout << endl;
    }

    void show(char arr[], int n) {
        cout << "char array elements ";
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    Display d;
    int x, n;
    float y;
    char z;

    cout << "enter integer ";
    cin >> x;
    d.show(x);

    cout << "enter float ";
    cin >> y;
    d.show(y);

    cout << "enter character ";
    cin >> z;
    d.show(z);

    cout << "enter size of int array ";
    cin >> n;
    int a[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> a[i];

    d.show(a, n);

    cout << "enter size of char array ";
    cin >> n;
    char b[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++) 
        cin >> b[i];

    d.show(b, n);

    return 0;
}