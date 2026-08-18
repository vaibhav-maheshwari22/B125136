#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int n;
    string name;
    bool isbook;

public:
    void get() {
        cout << "enter seat number: ";
        cin >> n;
        cout << "Is seat booked? (1 for Booked, 0 for Available): ";
        cin >> isbook;
        cin.ignore();
        if (isbook) {
            cout << "Enter passenger name: ";
            getline(cin, name);
        } else {
            name = "None";
        }
    }
    friend class TicketChecker;
};

class TicketChecker {
public:

    void display(TrainSeat &t) {
        
        cout << "Seat number: " << t.n << endl;
        cout << "Booking status: " << (t.isbook ? "booked" : "available") << endl;
        if (t.isbook) {
            cout << "Passenger name: " << t.name << endl;
        }
    }
    
    void check(TrainSeat &t) {
        if (t.isbook) {
            cout << "Seat is booked" << endl;
        } else {
            cout << "Seat is available" << endl;
        }
    }
    
    void displayPassenger(TrainSeat &t) {
        if (t.isbook) {
            cout << "Passenger name: " << t.name << endl;
        } else {
            cout << "No passenger assigned." << endl;
        }
    }
};



int main() {
    TrainSeat t;
    t.get();
    TicketChecker tc;
    tc.display(t);
    tc.check(t);
    tc.displayPassenger(t);
    return 0;
}