#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;
    int quantity;

public:
    void details(int index) {
        cout << "\nEnter details for Product " << index + 1 << ":" << endl;
        cout << "Product ID: ";
        cin >> id;
        cin.ignore();
        cout << "Product Name: ";
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Quantity: ";
        cin >> quantity;
    }

    double total(){
        return price * quantity;
    }

    void display() {
        cout << "ID: " << id 
             << " | Name: " << name 
             << " | Price: " << price 
             << " | Qty: " << quantity 
             << " | Total: " << total() << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products ";
    cin >> n;

    Product* cart = new Product[n];

    for (int i = 0; i < n; i++) {
        cart[i].details(i);
    }

    double grandTotal = 0.0;
    for (int i = 0; i < n; i++) {
        cart[i].display();
        grandTotal += cart[i].total();
    }
    cout << "Grand Total Amount: " << grandTotal << endl;

    delete[] cart;
    cart = nullptr;

    return 0;
}