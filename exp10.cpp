// Develop a program to demonstrate exception handling in a simple banking application, where exceptions like InsufficientFunds and InvalidAccount are raised.
#include <bits/stdc++.h>
using namespace std;
class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient funds in the account.";
    }
};
class InvalidAccountException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid account number.";
    }
};
class BankAccount {
private:
    string accountNumber;
    double balance;
public:
    BankAccount(const string& accNum, double initialBalance) : 
        accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Deposit amount must be greater than zero.");
        }
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Withdrawal amount must be greater than zero.");
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }
    double getBalance() const {
        return balance;
    }
    string getAccountNumber() const {
        return accountNumber;
    }
};
int main() {
    try {
        // Create a bank account
        BankAccount account("123456789", 1000.0);
        // Deposit some money
        account.deposit(500.0);
        cout << "Current balance: " << account.getBalance() << endl;
        // Withdraw some money
        account.withdraw(2000.0); // This will raise InsufficientFundsException
        cout << "Current balance: " << account.getBalance() << endl; 
    } catch (const InsufficientFundsException& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const InvalidAccountException& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "An unexpected error occurred: " << e.what() << endl;
    }
    return 0;
}