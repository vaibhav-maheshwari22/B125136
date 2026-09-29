#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min;

public:
    Time(int h = 0, int m = 0)
    {
        hr = h;
        min = m;
    }

    Time operator+(Time t)
    {
        hr += t.hr;
        min += t.min;
        if (min >= 60)
        {
            hr += min / 60;
            min %= 60;
        }
        return *this;
    }

    void display()
    {
        cout << hr << "hr\t" << min << "min" << endl;
    }
};

int main()
{
    Time t1(5, 8);
    Time t2(3, 7);

    Time t3 = t1 + t2;

    cout << "result" << endl;
    ;
    t3.display();
}
