#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
};

class Student : virtual public Person {
protected:
    int rollNo;
    double cgpa;
public:
    Student(string n, int a, int r, double c) : Person(n, a), rollNo(r), cgpa(c) {}
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;
public:
    Employee(string n, int a, int id, double s) : Person(n, a), employeeID(id), salary(s) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, double c, int id, double s) 
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, s) {}

    void displayInfo() const {
        cout << "TA Name: " << name << ", Age: " << age 
                  << "\nRoll: " << rollNo << ", CGPA: " << cgpa 
                  << "\nEmp ID: " << employeeID << ", Salary: $" << salary << "\n";
    }
};

int main() {
    TeachingAssistant ta("Diana", 24, 205, 8.8, 9001, 15000);
    ta.displayInfo();
    return 0;
}