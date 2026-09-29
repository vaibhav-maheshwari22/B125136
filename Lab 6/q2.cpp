#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator-(Complex c)
    {
        real -= c.real;
        img -=  c.img;

        return *this;
    }

    void display()
    {   if(img>=0)
        cout << real << "+" << img << "i" << endl;
        else 
        cout << real << "-" << img << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 8);
    Complex c2(3, 7);

    Complex c3 = c1 - c2;

    cout << "result" << endl;
    
    c3.display();
}
