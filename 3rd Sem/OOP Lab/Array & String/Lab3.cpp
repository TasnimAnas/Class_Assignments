#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Bank
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    float balance;

public:
    Bank() {}
    void input(string depositorName, int accountNumber, string accountType, float balance)
    {

        this->depositorName = depositorName;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }
    void Display()
    {
        cout << "Name: " << depositorName << endl
             << "Balance: " << balance << endl;
    }
    void Deposit(float amount)
    {
        balance += amount;
        cout << "Amount " << amount << " is deposited" << endl;
    }
    void Withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn" << endl;
        }
        else
        {
            cout << "Not enough balance." << endl;
        }
    }
    ~Bank()
    {
        delete &depositorName;
        delete &accountNumber;
        delete &accountType;
        delete &balance;
    }
};

int main()
{
    Bank acc;
    acc.input("Tasnim Anas", 123456789, "Savings", 15000);
    while (1)
    {
        cout << "1. Account details" << endl
             << "2. Deposit Money" << endl
             << "3. Withdraw" << endl
             << endl
             << "Select Option: ";
        int opt;
        cin >> opt;
        switch (opt)
        {
        case 1:
        {
            acc.Display();
            break;
        }
        case 2:
        {
            cout << "Enter deposit amount: ";
            float dep;
            cin >> dep;
            acc.Deposit(dep);
            break;
        }
        case 3:
        {
            cout << "Enter withdraw amount: ";
            float wit;
            cin >> wit;
            acc.Withdraw(wit);
            break;
        }
        default:
        {
            cout << "Wrong selection..." << endl
                 << endl;
            main();
        }
        }
        cout << endl;
    }

    return 0;
}