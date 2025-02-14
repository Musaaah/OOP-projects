//REG NO: BSE -05-0193/2024
//NAME: MOSES WACHIRA 
//:ENCAPSULATION

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for accountHolder
    void setAccountHolder(string name) {
        accountHolder = name;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance
    void setBalance(double amount) {
        balance = amount;
    }
};

int main() {
    BankAccount account;

    // Set account holder and balance
    account.setAccountHolder("Rogan Matt");
    account.setBalance(1000.0);

    // Get and print account details
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: sh" << account.getBalance() << endl;

    return 0;
}

