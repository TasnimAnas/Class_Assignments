/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard, WAP to find the total number of
currency notes of each denomination the cashier will have to give to the
withdrawer.
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Cash_762
{
private:
    int tenNote_762;
    int fiftyNote_762;
    int hundredNote_762;

public:
    Cash_762()
    {
        tenNote_762 = 0;
        fiftyNote_762 = 0;
        hundredNote_762 = 0;
    }
    void Note_762(int amount)
    {
        hundredNote_762 = amount / 100;
        amount %= 100;
        fiftyNote_762 = amount / 50;
        amount %= 50;
        tenNote_762 = amount / 10;
        amount %= 10;
        cout << "Hundred Note: " << hundredNote_762 << endl
             << "Fifty Note: " << fiftyNote_762 << endl
             << "Ten Note: " << tenNote_762 << endl;
        if (amount)
            cout << "Rest: " << amount << endl;
    }
};

int main()
{
    int amount_762;
    cout << "Enter amount: ";
    cin >> amount_762;
    Cash_762 c;
    c.Note_762(amount_762);
    return 0;
}