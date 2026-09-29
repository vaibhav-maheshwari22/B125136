#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    int quantity;
    float price;
    float total = quantity * price;

public:
    Product(string f = "", int i = 0, float p = 0)
    {
        name = f;
        quantity = i;
        price = p;
    }

    bool operator==(Product i)
    {
        return (name == i.name && price == i.price);
    }

    Product operator+(Product i)
    {
        name = i.name;
        price = i.price;
        quantity = quantity + i.quantity;

        return *this;
    }

    bool operator>(Product i)
    {
        return (total > i.total);
    }

    void display()
    {
        cout << "Product name" << name << endl;
        cout << "quantity" << quantity << endl;
        cout << "price" << price << endl;
        cout << "total value" << total << endl;
    }
};

int main()
{
    Product i1("cap", 10, 5.00);
    Product i2("cap", 20, 5.00);

    i1.display();
    i2.display();
    if (i1 == i2)
    {
        cout << "Combined Product" << endl;
        Product i3 = i1 + i2;

        i3.display();
    }
    if (i1 > i2)
    {
        cout << "total value of first product is greater";
    }
    else
    {
        cout << "total value of second product is greater";
    }
}
