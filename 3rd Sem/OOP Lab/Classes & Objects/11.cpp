/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP for a class called Distance that has data member feet as integer and inches as
float. The class has the following member functions:
 void set(int, float) to give value to object
 void disp() to display distance in feet and inches
 Distance add(Distance) to sum two distances & return distance

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Distance_762
{
private:
    int feet_762;
    float inch_762;

public:
    Distance_762()
    {
        feet_762 = 0;
        inch_762 = 0;
    }
    void set(int feet, float inch)
    {
        this->feet_762 = feet;
        this->inch_762 = inch;
    }
    void display_762()
    {
        cout << "Distance: " << feet_762 << "'" << inch_762 << "\"" << endl;
    }
    Distance_762 add(Distance_762 a, Distance_762 b)
    {
        Distance_762 x;

        int k = int(a.inch_762 + b.inch_762) / 12;
        x.inch_762 = a.inch_762 + b.inch_762 - (k * 12);
        x.feet_762 = a.feet_762 + b.feet_762 + k;
        return x;
    }
};

int main()
{
    Distance_762 a, b, c;
    int feet;
    float inch;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inch: ";
    cin >> inch;
    a.set(feet, inch);
    a.display_762();

    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inch: ";
    cin >> inch;
    b.set(feet, inch);
    b.display_762();

    c = c.add(a, b);
    cout << "After adding ";
    c.display_762();

    return 0;
}