/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP using appropriate constructors and destructors to represent the bank
account with following specification
 Private members
 Name of the depositor          Type of account
 Account number                 Balance amount in the account

 Public members function to
 Assign initial values          Withdraw an amount after checking balance
 Deposit an amount              Display name and balance

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
    Bank_762(string depositorName_762, int accountNumber_762, string accountType_762, float balance_762)
    {

        this->depositorName_762 = depositorName_762;
        this->accountNumber_762 = accountNumber_762;
        this->accountType_762 = accountType_762;
        this->balance_762 = balance_762;
    }
    void Display_762()
    {
        cout << "Name: " << depositorName_762 << endl
             << "Balance: " << balance_762 << endl;
    }
    void Deposit_762(float amount_762)
    {
        balance_762 += amount_762;
        cout << "Amount " << amount_762 << " is deposited" << endl;
    }
    void Withdraw_762(float amount_762)
    {
        if (amount_762 <= balance_762)
        {
            balance_762 -= amount_762;
            cout << "Amount " << amount_762 << " withdrawn" << endl;
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
    string depositorName_762;
    int accountNumber_762;
    string accountType_762;
    float balance_762;
    cout << "Enter account holder name: ";
    getline(cin, depositorName_762);
    cout << "Enter account number: ";
    cin >> accountNumber_762;
    cin.ignore();
    cout << "Enter account type(Savings, Fixed Deposit): ";
    getline(cin, accountType_762);
    cout << "Enter balance: ";
    cin >> balance_762;
    Bank_762 acc(depositorName_762, accountNumber_762, accountType_762, balance_762);
    while (1)
    {
        cout << "1. Account details" << endl
             << "2. Deposit Money" << endl
             << "3. Withdraw" << endl
             << "4. Exit" << endl
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
        case 4:
        {
            return 0;
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