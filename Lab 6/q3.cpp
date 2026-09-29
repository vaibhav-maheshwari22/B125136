#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int mark;

public:
    Student(string f = "", int i = 0)
    {
        name = f;
        mark = i;
    }

    bool operator>(Student s1)
    {
        return mark > s1.mark;
    }

    void display()
    {
        cout << "Student name" << name << endl;
        cout << "Total Marks" << mark << endl;
    }
};

int main()
{
    Student s1("Ram", 90);
    Student s2("Krish", 79);

    cout << "Student with higher marks" << endl;
    if (s1 > s2)
    {
        s1.display();
    }
    else
    {
        s2.display();
    }
}
