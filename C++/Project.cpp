#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string accountType;
    double balance;
    int userPin;

public:
    BankAccount(const string &type, int pin) : accountType(type), balance(0.0), userPin(pin) {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (balance >= amount)
            {
                balance -= amount;
                cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
            }
            else
            {
                cout << "Insufficient balance." << endl;
            }
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }

    int getPin() const
    {
        return userPin;
    }
};

int main()
{
    string accountType;
    int userPin;
    cout << "Select account type (current/savings): ";
    cin >> accountType;

    cout << "Enter user PIN: ";
    cin >> userPin;

    BankAccount userAccount(accountType, userPin);

    double initialDeposit;
    cout << "Enter initial deposit amount: $";
    cin >> initialDeposit;
    userAccount.deposit(initialDeposit);

    int choice;
    while (true)
    {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            double depositAmount;
            cout << "Enter deposit amount: $";
            cin >> depositAmount;
            userAccount.deposit(depositAmount);
            break;
        case 2:
            double withdrawAmount;
            cout << "Enter withdrawal amount: $";
            cin >> withdrawAmount;
            userAccount.withdraw(withdrawAmount);
            break;
        case 3:
            cout << "Exiting. Current balance: $" << userAccount.getBalance() << endl;
            return 0;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}
