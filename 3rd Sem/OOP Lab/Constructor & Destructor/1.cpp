/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
Define a class called Point that stores the x and y coordinates of the point. WAP
that uses parameterized constructor for initializing the class objects and also
display the coordinates.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Point_762
{
private:
    int x_762;
    int y_762;

public:
    Point_762() {}
    Point_762(int x_762, int y_762)
    {
        this->x_762 = x_762;
        this->y_762 = y_762;
    }
    void Display_762()
    {
        cout << "Point: (" << x_762 << "," << y_762 << ")" << endl;
    }
    ~Point_762()
    {
        delete &x_762;
        delete &y_762;
    }
};

int main()
{
    int x_762, y_762;
    cout << "Enter Y and Y coordinate: ";
    cin >> x_762 >> y_762;
    Point_762 p(x_762, y_762);
    p.Display_762();

    return 0;
}