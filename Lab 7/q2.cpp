#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    double baseMarks;
public:
    Student(string n, int r, double m) : name(n), rollNo(r), baseMarks(m) {}
    
    virtual void calculateResult() const {
        cout << "Student: " << name << ", Total Marks: " << baseMarks << "\n";
    }
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, double m) : Student(n, r, m) {}
    void calculateResult() const override {
        cout << "[Regular] " << name << ", Final Marks: " << baseMarks << "\n";
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, double m) : Student(n, r, m) {}
    void calculateResult() const override {
        cout << "[Scholarship] " << name << ", Final Marks: " << (baseMarks + 5) << "\n";
    }
};

int main() {
    RegularStudent rs("Bob", 101, 85);
    ScholarshipStudent ss("Charlie", 102, 85);
    rs.calculateResult();
    ss.calculateResult();
    return 0;
}   