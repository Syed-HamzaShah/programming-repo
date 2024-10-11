// Write a C++ program to implement a class called BankAccount that has private member variables
// for account number and balance.
// Include member functions to deposit and withdraw money from the account.
#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    long long int account_number;
    double balance;

public:
    BankAccount(long long int x, double y) : account_number(x), balance(y) {}

    void deposit(int);
    void withdraw(int);
};

void BankAccount::deposit(int x)
{
    balance = balance + x;
    cout << "Deposit Successs!" << endl;
    cout << "New Balance : " << balance << endl;
}

void BankAccount::withdraw(int y)
{
    if (y > balance)
    {
        cout << "Insufficent Balance" << endl;
    }
    else
    {
        balance = balance - y;
        cout << "Money Withdrawn!" << endl;
        cout << "Remaining Balance : " << balance << endl;
    }
}

int main(void)
{
    long long int a;
    double b;
    cout << "Enter your Account Number" << endl;
    cin >> a;
    cout << "Enter your Balance" << endl;
    cin >> b;

    BankAccount obj(a, b);
    int choice;
    cout << "Do you want to\n1 = deposit money\n2 = withdraw" << endl;
    cin >> choice;

    if (choice == 1)
    {
        int amount;
        cout << "Enter the amount" << endl;
        cin >> amount;
        obj.deposit(amount);
    }
    else if (choice == 2)
    {
        int amount;
        cout << "Enter the amount" << endl;
        cin >> amount;
        obj.withdraw(amount);
    }
    else
    {
        cout << "Invalid Choice!" << endl;
        exit(1);
    }

    return 0;
}