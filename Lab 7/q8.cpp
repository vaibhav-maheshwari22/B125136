#include <iostream>
#include <string>
using namespace std;


class Patient {
protected:
    string name;
    int patientID;
    int age;
public:
    Patient(string n, int id, int a) : name(n), patientID(id), age(a) {}
};

class InPatient : public Patient {
private:
    double roomCharges;
    int days;
public:
    InPatient(string n, int id, int a, double charge, int d) 
        : Patient(n, id, a), roomCharges(charge), days(d) {}

    void displayBill() const {
        double totalBill = roomCharges * days;
        cout << "Patient: " << name << " (ID: " << patientID << ", Age: " << age << ")\n";
        cout << "Total Hospital Bill: " << totalBill << "\n";
    }
};

int main() {
    InPatient p("Ethan", 3004, 45, 200.0, 4);
    p.displayBill();
    return 0;
}