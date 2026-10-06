#include <iostream>
using namespace std;


class Academic {
protected:
    double m1, m2, m3;
public:
    Academic(double a, double b, double c) : m1(a), m2(b), m3(c) {}
};

class Sports {
protected:
    double sportsMarks;
public:
    Sports(double s) : sportsMarks(s) {}
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(double a, double b, double c, double s) : Academic(a, b, c), Sports(s) {}
    void displayResult() const {
        double total = m1 + m2 + m3 + sportsMarks;
        double average = total / 4.0;
        cout << "Total Marks: " << total << "\nAverage: " << average << "\n";
    }
};

int main() {
    StudentResult sr(85, 90, 80, 95);
    sr.displayResult();
    return 0;
}