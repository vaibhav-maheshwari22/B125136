#include <iostream>
#include <string>
using namespace std;

class Exam {
private:
    string name;
    string subject;
    float marks;
    float maxMarks;

public:
    void get() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter marks obtained: ";
        cin >> marks;
        cout << "Enter maximum marks: ";
        cin >> maxMarks;
    }
    friend class Result;
};

class Result {
public:
    
    float calculate(Exam &e) {
        return (e.marks / e.maxMarks) * 100;
    }
    
    void check(Exam &e) {
        float pct = calculate(e);
        if (pct >= 40.0) {
            cout << "Result: pass" << endl;
        } else {
            cout << "Result: fail" << endl;
        }
    }
    
    void display(Exam &e) {
        float pct = calculate(e);
        cout << "Student Name: " << e.name << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << " / " << e.maxMarks << endl;
        cout << "Percentage: " << pct << "%" << endl;
        check(e);
    }
};



int main() {
    Exam e;
    e.get();
    Result r;
    r.display(e);
    return 0;
}