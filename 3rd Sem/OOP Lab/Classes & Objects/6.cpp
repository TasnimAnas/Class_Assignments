/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to represent the bank account with following specification
 Private members
 Name of the depositor
 Account number
 Type of account
 Balance amount in the account


 Public members function to
 Assign initial values
 Deposit an amount
 Withdraw an amount after checking balance
 Display name and balance
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Bank_762
{
private:
    string depositorName_762;
    int accountNumber_762;
    string accountType_762;
    float balance_762;

public:
    Bank_762()
    {
        depositorName_762 = "";
        accountNumber_762 = 0;
        accountType_762 = "";
        balance_762 = 0;
    }
    void input_762(string depositorName, int accountNumber, string accountType, float balance)
    {

        this->depositorName_762 = depositorName;
        this->accountNumber_762 = accountNumber;
        this->accountType_762 = accountType;
        this->balance_762 = balance;
    }
    void Display_762()
    {
        cout << "Name: " << depositorName_762 << endl
             << "Balance: " << balance_762 << endl;
    }
    void Deposit_762(float amount)
    {
        balance_762 += amount;
        cout << "Amount " << amount << " is deposited" << endl;
    }
    void Withdraw_762(float amount)
    {
        if (amount <= balance_762)
        {
            balance_762 -= amount;
            cout << "Amount " << amount << " withdrawn" << endl;
        }
        else
        {
            cout << "Not enough balance." << endl;
        }
    }
    ~Bank_762()
    {
        delete &depositorName_762;
        delete &accountNumber_762;
        delete &accountType_762;
        delete &balance_762;
    }
};

int main()
{
    Bank_762 acc;
    acc.input_762("Tasnim Anas", 123456789, "Savings", 15000);
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
            acc.Display_762();
            break;
        }
        case 2:
        {
            cout << "Enter deposit amount: ";
            float dep;
            cin >> dep;
            acc.Deposit_762(dep);
            break;
        }
        case 3:
        {
            cout << "Enter withdraw amount: ";
            float wit;
            cin >> wit;
            acc.Withdraw_762(wit);
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