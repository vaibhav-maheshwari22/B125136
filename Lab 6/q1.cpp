#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inch = i;
    }

    Distance operator+(Distance d)
    {
        feet += d.feet;
        inch += d.inch;
        if (inch >= 12)
        {
            feet += inch / 12;
            inch %= 12;
        }
        return *this;
    }

    void display()
    {
        cout << feet << "ft\t" << inch << "inches" << endl;
    }
};

int main()
{
    Distance d1(5, 8);
    Distance d2(3, 7);

    Distance d3 = d1 + d2;

    cout << "result" << endl;
    ;
    d3.display();
}
