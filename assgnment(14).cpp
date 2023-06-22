#include <iostream>

class Account {
protected:
    std::string customerName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    void acceptDeposit(double amount) {
        balance += amount;
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::
