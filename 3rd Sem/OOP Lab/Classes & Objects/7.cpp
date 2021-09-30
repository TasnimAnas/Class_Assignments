/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to represent the vector and include the member functions to form the
following tasks:
 Create the vector
 Modify the value of a given element
 Multiply by scalar value
 Display the vector in the form (10, 20, 30,…)

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Vector_762
{
private:
    int coordinates_762;
    int *values_762;

public:
    Vector_762()
    {
        coordinates_762 = 0;
        values_762 = NULL;
    }
    void createVector_762()
    {
        cout << "Enter number of coordinates: ";
        cin >> coordinates_762;
        values_762 = (int *)calloc(coordinates_762, sizeof(int));
    }
    void modify_762()
    {
        cout << "Enter coordinate values: ";
        for (int i = 0; i < coordinates_762; i++)
        {
            cin >> values_762[i];
        }
    }
    void display_762()
    {
        cout << "Vector: (";
        for (int i = 0; i < coordinates_762; i++)
        {
            cout << values_762[i];
            if (i != coordinates_762 - 1)
                cout << ", ";
        }
        cout << ")" << endl;
    }
    void multiply_762()
    {
        int x;
        cout << "Enter number to multiply: ";
        cin >> x;
        for (int i = 0; i < coordinates_762; i++)
        {
            values_762[i] *= x;
        }
    }
};

int main()
{
    Vector_762 v;
    v.createVector_762();
    v.modify_762();
    v.display_762();
    v.multiply_762();
    v.display_762();
    return 0;
}