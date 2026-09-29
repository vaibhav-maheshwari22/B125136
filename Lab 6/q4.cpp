#include <iostream>
using namespace std;

class Number
{
private:
    int val;

public:
    Number(int r = 0)
    {
        val = r;
    }

    Number operator-()
    {
        val = -val;
        return *this;
    }

    void display()
    {
        cout << val << endl;
    }
};

int main()
{
    Number c1(8);
    Number c2 = -c1;

    c2.display();
}
