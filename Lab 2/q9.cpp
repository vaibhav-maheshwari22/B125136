#include <iostream>
using namespace std;

class StudentResult {
public:
    string name;
    string roll_no;
    float marks[5];
    float tot;
    float perc;
    char g;

    void input() {
        cout << "Enter Name" << endl;
        getline(cin,name);
        cout << "Enter roll no" << endl;
        cin >> roll_no;
        
        tot = 0;
        cout << "Enter marks of 5 subjects" << endl;
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
            tot = tot + marks[i];
        }
    }

    void calc() {
        perc = (tot / 500.0) * 100;
        
        if (perc >= 90) g = 'A';
        else if (perc >= 80) g = 'B';
        else if (perc >= 70) g = 'C';
        else if (perc >= 60) g = 'D';
        else g = 'F';
    }

    void show() {
        cout << endl;
        cout << "STUDENT RESULT  :" << endl;
        cout << "Name :" << name << endl;
        cout << "Roll_NO  :" << roll_no << endl;
        cout << "Total Marks :" << tot << endl;
        cout << "Percentage :" << perc << endl;
        cout << "Grade :" << g << endl;
    }
};

int main() {
    StudentResult s;
    
    s.input();
    s.calc();
    s.show();
    
    return 0;
}