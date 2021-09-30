/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to calculate the simple interest & the total amount to be paid. Simple interest
is calculated as (principal amount * rate of interest * tenure) / 100 and the total
amount is calculated as simple interest + principal amount .

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Interest_762
{
private:
    int principalAmount_762;
    float interestRate_762;
    int tenure_762;

public:
    Interest_762()
    {
        principalAmount_762 = 0;
        interestRate_762 = 0;
        tenure_762 = 0;
    }
    void setValue_762(int principalAmount, float interestRate, int tenure)
    {
        this->principalAmount_762 = principalAmount;
        this->interestRate_762 = interestRate;
        this->tenure_762 = tenure;
    }
    float simpleInterest_762()
    {
        return float(principalAmount_762 * interestRate_762 * tenure_762) / 100;
    }
    float totalAmount_762()
    {
        return float(principalAmount_762 + simpleInterest_762());
    }
};

int main()
{
    int principalAmount_762;
    float interestRate_762;
    int tenure_762;
    Interest_762 a_762;
    cout << "Enter principal amount: ";
    cin >> principalAmount_762;
    cout << "Enter Interest rate: ";
    cin >> interestRate_762;
    cout << "Enter tenure: ";
    cin >> tenure_762;
    a_762.setValue_762(principalAmount_762, interestRate_762, tenure_762);
    cout << "Total amount: " << a_762.totalAmount_762() << endl;
    return 0;
}