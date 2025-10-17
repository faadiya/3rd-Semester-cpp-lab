#include <iostream>
using namespace std;
class BankAccount {
protected:
    int account_number;
    double balance;

public:
    void inputAccount() {
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    void setInterestRate(double rate) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Added: " << interest << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    void setOverdraftLimit(double limit) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Exceeded overdraft limit!" << endl;
        }
    }
};

int main() {
    SavingsAccount sa;
    CurrentAccount ca;

    cout << "Enter details for Savings Account:\n";
    sa.inputAccount();
    sa.setInterestRate(5);
    sa.deposit(1000);
    sa.addInterest();
    sa.displayBalance();

    cout << "\nEnter details for Current Account:\n";
    ca.inputAccount();
    ca.setOverdraftLimit(500); 
    ca.withdraw(700);          
    ca.displayBalance();

    return 0;
}
