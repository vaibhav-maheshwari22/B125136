#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string regNo;
    int rentalDays;
public:
    Vehicle(string r, int d) : regNo(r), rentalDays(d) {}
};

class Car : public Vehicle {
protected:
    double dailyRate;
public:
    Car(string r, int d, double rate) : Vehicle(r, d), dailyRate(rate) {}
};

class LuxuryCar : public Car {
private:
    double luxuryCharge;
public:
    LuxuryCar(string r, int d, double rate, double lux) 
        : Car(r, d, rate), luxuryCharge(lux) {}

    void displayCost() const {
        double totalCost = (dailyRate + luxuryCharge) * rentalDays;
        cout << "Vehicle Reg: " << regNo << "\nTotal Rental Cost: $" << totalCost << "\n";
    }
};

int main() {
    LuxuryCar lc("IND-1234", 3, 50.0, 20.0);
    lc.displayCost();
    return 0;
}