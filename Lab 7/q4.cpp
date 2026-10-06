#include <iostream>
using namespace std;


class BankAccount {
protected:
    int accountNumber;
    double balance;
public:
    BankAccount(int acc, double bal) : accountNumber(acc), balance(bal) {}
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(int acc, double bal, double rate) : BankAccount(acc, bal), interestRate(rate) {}
    void addInterest() {
        balance += balance * interestRate;
        cout << "Savings Balance (after interest): $" << balance << "\n";
    }
};

class CurrentAccount : public BankAccount {
private:
    double minBalance;
    double maintenanceCharge;
public:
    CurrentAccount(int acc, double bal, double minB, double charge) 
        : BankAccount(acc, bal), minBalance(minB), maintenanceCharge(charge) {}
    void checkMinimum() {
        if (balance < minBalance) balance -= maintenanceCharge;
        cout << "Current Balance (after min-balance check): $" << balance << "\n";
    }
};

int main() {
    SavingsAccount sa(1001, 1000.0, 0.05);
    CurrentAccount ca(1002, 400.0, 500.0, 25.0);
    sa.addInterest();
    ca.checkMinimum();
    return 0;
}