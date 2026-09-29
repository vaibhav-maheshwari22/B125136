#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number ";
    cin >> n;

    float* arr = new float[n];
    float sum = 0;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}