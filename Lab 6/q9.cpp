#include <iostream>
using namespace std;

class Temparature
{
private:
    int degree;

public:
    Temparature(int i = 0)
    {
        degree = i;
    }

    bool operator>(Temparature t1)
    {
        return degree > t1.degree;
    }
    bool operator<(Temparature t1)
    {
        return degree < t1.degree;
    }

    void display()
    {
        cout << "Temparature" << degree << endl;
    }
};

int main()
{
    Temparature t1(32);
    Temparature t2(26);

    if (t1 < t2)
    {
        cout << "Lower Temparature" << endl;
        t1.display();
    }
    else if (t1 > t2)
    {
        cout << "Higher Temparature" << endl;
        t1.display();
    }
    else
    {
        cout << "Both temperatures are equal" << endl;
    }
}
