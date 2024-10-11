#include <bits/stdc++.h>
using namespace std;

class Bank;
class Account;

class Bank
{
public:
    void transferMoney(Account *sender, Account *reciever, double amount)
    {
        // code
    }
};

class Account
{
    double balance;
    long int id;

public:
    Account(long int x, double y) : id(x), balance(y) {}

    void getData()
    {
        cout << "The balance for the ID " << id << " is " << balance << endl;
    }
};

int main(void)
{
    Account *a = new Account(4665, 5000);
    Account *b = new Account(4669, 3000);

    Bank bank;
    bank.transferMoney(a, b, 2000);

    a->getData();
    b->getData();

    return 0;
}