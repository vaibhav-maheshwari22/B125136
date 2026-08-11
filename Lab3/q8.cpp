#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int numSubjects;
    float* marks;

public:
    
    void details(){
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        
        
        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;

        marks = new float[numSubjects];
        cout << "Enter marks for each subject" << endl;
        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    float total(){
        float total = 0;
        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }
        return total;
    }

    float average(){
        return (numSubjects > 0) ? (total() / numSubjects) : 0;
    }

    void result(){
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < numSubjects; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << total() << endl;
        cout << "Average Marks: " << average() << endl;
    }

    ~Student() {
        delete[] marks;
        marks = nullptr;
    }
};

int main() {
    Student s;
    s.details();
    s.result();

    return 0;
}