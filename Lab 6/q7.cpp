#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date(int d = 0, int m = 0, int y = 0)
    {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(Date d)
    {

        return ((day == d.day) && (month = d.month) && (year == d.year));
    }

    void display()
    {
        cout << day << "\t" << month << "\t" << year << endl;
    }
};

int main()
{
    Date d1(5, 8, 2008);
    Date d2(5, 8, 2008);

    if (d1 == d2)
    {
        cout << "dates are equal" << endl;
        d1.display();
    }
    else
    {
        cout << "dates are not equal" << endl;
    }
}
