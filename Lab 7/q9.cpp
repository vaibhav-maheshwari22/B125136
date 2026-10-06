#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {
        cout << "Person constructor executed.\n";
    }
};

class Employee : public Person {
protected:
    int id;
public:
    Employee(string n, int i) : Person(n), id(i) {
        cout << "Employee constructor executed.\n";
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int i, string d) : Employee(n, i), department(d) {
        cout << "Manager constructor executed.\n";
    }
    void display() const {
        cout << "\nInfo: Manager " << name << ", ID " << id << ", Dept: " << department << "\n";
    }
};

int main() {
    Manager m("Fiona", 4001, "IT");
    m.display();
    return 0;
}