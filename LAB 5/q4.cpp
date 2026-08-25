#include <iostream>
using namespace std;

class Search {
public:
    void find(int arr[], int n, int key) {
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                 pos = i + 1; 
                 break; 
            }
        }
        if (pos != -1)
             cout << "element found at position " << pos << endl;
        else 
            cout << "element not found" << endl;
    }

    void find(char arr[], int n, char key) {
        int pos = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                 pos = i + 1; 
                 break; 
            }
        }
        if (pos != -1)
             cout << "character found at position " << pos << endl;
        else 
            cout << "character not found" << endl;
    }

    void find(int arr[], int start, int end, int key) {
        int pos = -1;
        for (int i = start; i <= end; i++) {
            if (arr[i] == key) {
                 pos = i + 1; 
                 break;
            }
        }
        if (pos != -1)
             cout << "element found in range at position " << pos << endl;
        else 
            cout << "element not found in range" << endl;
    }
};

int main() {
    Search s;
    int n, key, start, end;
    char ckey;

    cout << "enter size of int array ";
    cin >> n;
    int a[n];
    
    cout << "enter elements ";
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    cout << "enter int element to search ";
    cin >> key;
    s.find(a, n, key);

    cout << "enter start and end index for range search ";
    cin >> start >> end;
    s.find(a, start, end, key);

    cout << "enter size of char array ";
    cin >> n;
    char b[n];

    cout << "enter elements ";
    for (int i = 0; i < n; i++)
         cin >> b[i];

    cout << "enter char to search ";
    cin >> ckey;
    s.find(b, n, ckey);

    return 0;
}