// 1. Define a class to represent a bank account. Include the following member functions: Data members:
//  Name of the depositor
//  Account number
//  Account type
//  Balance amount in the account
// Member function:
//  To assign initial values
//  To deposit an amount
//  To withdraw an amount after checking the balance
//  To display name and balance
// Write main program to test the program
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful.\n";
    }

    // Function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            cout << "Insufficient balance for withdrawal.\n";
        }
    }

    // Function to display name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    string name, type;
    int accNum;
    double initialBalance, depositAmt, withdrawAmt;

    cout << "Enter depositor name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNum;

    cin.ignore(); // Ignore the newline character left by cin

    cout << "Enter account type: ";
    getline(cin, type);

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    BankAccount myAccount(name, accNum, type, initialBalance);
    myAccount.display();

    cout << "\nEnter amount to deposit: $";
    cin >> depositAmt;
    myAccount.deposit(depositAmt);
    myAccount.display();

    cout << "\nEnter amount to withdraw: $";
    cin >> withdrawAmt;
    myAccount.withdraw(withdrawAmt);
    myAccount.display();

    return 0;
}

