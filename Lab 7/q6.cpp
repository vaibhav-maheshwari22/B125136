#include <iostream>
using namespace std;


class InternalExam {
public:
    void display()  { cout << "Internal Exam Marks: 45/50\n"; }
};

class ExternalExam {
public:
    void display()  { cout << "External Exam Marks: 88/100\n"; }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void display()  {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult fr;
    fr.display();
    return 0;
}