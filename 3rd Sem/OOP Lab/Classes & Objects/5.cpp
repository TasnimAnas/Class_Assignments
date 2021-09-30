/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to represent the class student with following specification
 Private members-               roll_no
 name                           6 subjects mark
 total

 Public members function to-
 calculate the total marks      display the grade
 accept values from input device to calculate total.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Student_762
{
private:
    unsigned int roll_762;
    string name_762;
    float mark_762[6] = {0};
    float total_762;

public:
    Student_762()
    {
        roll_762 = 0;
        name_762 = "";
        int i = 0;
        while (i < 6)
        {
            mark_762[i] = 0;
            i++;
        }
        total_762 = 0;
    }
    void setValues_762()
    {
        cout << "Enter roll: ";
        cin >> roll_762;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name_762);
        int i = 0;
        while (i < 6)
        {
            cout << "Mark on subject " << i + 1 << ": ";
            cin >> mark_762[i];
            i++;
        }
    }
    float getTotal_762()
    {
        int i = 0;
        while (i < 6)
        {
            total_762 += mark_762[i];
            i++;
        }
        return total_762;
    }
    void displayGrade_762()
    {
        float avg = getTotal_762() / 6;
        cout << "Name: " << name_762 << endl
             << "Roll: " << roll_762 << endl
             << "Average mark: " << avg << endl;
        switch (int(avg / 10))
        {
        case 1:
        case 2:
        case 3:
        {
            cout << "Grade F" << endl;
            break;
        }
        case 4:
        {
            cout << "Grade D" << endl;
            break;
        }
        case 5:
        {
            cout << "Grade C" << endl;
            break;
        }
        case 6:
        {
            cout << "Grade B" << endl;
            break;
        }
        case 7:
        {
            cout << "Grade A" << endl;
            break;
        }
        case 8:
        {
            cout << "Grade E" << endl;
            break;
        }
        case 9:
        case 10:
        {
            cout << "Grade 0" << endl;
            break;
        }
        }
    }
};

int main()
{
    Student_762 s;
    s.setValues_762();
    s.displayGrade_762();

    return 0;
}