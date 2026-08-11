#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double salary;
    int months;
    double* earnings;

public:
    
    void details() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> salary;
        cout << "Enter Number of Months: ";
        cin >> months;

        earnings = new double[months];
        cout << "Enter monthly earnings"<< endl;
        for (int i = 0; i < months; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> earnings[i];
        }
    }

    double total(){
        double total = 0.0;
        for (int i = 0; i < months; i++) {
            total += earnings[i];
        }
        return total;
    }

    double average(){
        return (months > 0) ? (total() / months) : 0;
    }

    int HighestEarning() {
        if (months <= 0) return -1;
        int maxIdx = 0;
        for (int i = 1; i < months; i++) {
            if (earnings[i] > earnings[maxIdx]) {
                maxIdx = i;
            }
        }
        return maxIdx + 1; // 1-based month index
    }

    void analysis()  {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Total Earnings  " << total() << endl;
        cout << "Average Monthly Earning: " << average() << endl;

        int bestMonth = HighestEarning();
        if (bestMonth != -1) {
            cout << "Highest Earning Month " << bestMonth 
                 << " (" << earnings[bestMonth - 1] << ")" << endl;
        }
    }

    ~Employee() {
        delete[] earnings;
        earnings = nullptr;
    }
};

int main() {
    Employee emp;
    emp.details();
    emp.analysis();

    return 0;
}