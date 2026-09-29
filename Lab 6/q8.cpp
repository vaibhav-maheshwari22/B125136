#include <iostream>
using namespace std;

class Inventory
{
private:
    string name;
    int quantity;
    float price;

public:
    Inventory(string f = "", int i = 0, float p = 0)
    {
        name = f;
        quantity = i;
        price = p;
    }

    bool operator==(Inventory i)
    {
        return (name == i.name && price == i.price);
    }

    Inventory operator+(Inventory i)
    {
        name = i.name;
        price = i.price;
        quantity = quantity + i.quantity;

        return *this;
    }

    void display()
    {
        cout << "Inventory name" << name << endl;
        cout << "quantity" << quantity << endl;
        cout << "price" << price << endl;
    }
};

int main()
{
    Inventory i1("cap", 10, 5.00);
    Inventory i2("cap", 20, 5.00);

    i1.display();
    i2.display();
    if (i1 == i2)
    {
        cout << "Combined Inventory" << endl;
        Inventory i3 = i1 + i2;

        i3.display();
    }
}
