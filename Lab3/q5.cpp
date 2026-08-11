#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string roll_no;
    string name;
    int marks;

    void input() {
        cout << "Enter Name" << endl;
        getline(cin, name); 
        cout << "Enter roll no" << endl;
        cin >> roll_no;
        cout << "Enter marks of one subject" << endl;
        cin >> marks;
    }

    void show() {
        cout << endl;
       
        cout << "Name :" << name << endl;
        cout << "Roll_NO  :" << roll_no << endl;
        cout << "Marks in a subject  :" << marks << endl;
    }
};

int main() {
    student *s=new student;
    s->input();
    s->show();

    delete s;
    s=nullptr;
    return 0;
}