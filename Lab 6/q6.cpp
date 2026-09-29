#include <iostream>
using namespace std;

class Counter
{
private:
    int val;

public:
    Counter(int r = 0)
    {
        val = r;
        
    }

    Counter operator++()
    {
        ++val;
        return *this;
    }

    Counter operator++(int)
    {
        val++;
        return *this;
    }


    void display()
    {
        cout << val << endl;
    }
};

int main()
{
    Counter c1(8);
    Counter c2=c1++;
    Counter c3=++c1;

    c1.display();
    c2.display();
    c3.display();
}
