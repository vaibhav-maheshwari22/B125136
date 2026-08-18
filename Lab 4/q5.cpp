#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int id;
    string item;
    int quantity;
    float price;

public:
    void get() {
        cout << "enter Order ID: ";
        cin >> id;
        cin.ignore();
        cout << "enter Food Item: ";
        getline(cin, item);
        cout << "enter Quantity: ";
        cin >> quantity;
        cout << "enter Price per item: ";
        cin >> price;
    }
    friend void calculateBill(FoodOrder &f);
};

void calculateBill(FoodOrder &f) {
    float totalBill = f.quantity * f.price;
    cout << "Order ID: " << f.id << endl;
    cout << "Food item: " << f.item << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price per item: " << f.price << endl;
    cout << "Total bill: " << totalBill << endl;
}

int main() {
    FoodOrder f;
    f.get();
    calculateBill(f);
    return 0;
}