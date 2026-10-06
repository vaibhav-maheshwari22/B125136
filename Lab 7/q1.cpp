#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double b) : name(n), basicSalary(b) {}
};

class Developer : public Employee {
protected:
    int experience;
public:
    Developer(string n, double b, int exp) : Employee(n, b), experience(exp) {}
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;
public:
    SeniorDeveloper(string n, double b, int exp, double pb) 
        : Developer(n, b, exp), projectBonus(pb) {}


    void displayFinalSalary() const {
        double expBonus = 0.05 * basicSalary * experience;
        double finalSalary = basicSalary + expBonus + projectBonus;
        cout << "Name: " << name << "\nFinal Salary: $" << finalSalary << "\n";
    }
};

int main() {
    SeniorDeveloper sd("Alice", 50000, 5, 10000);
    sd.displayFinalSalary();
    return 0;
}