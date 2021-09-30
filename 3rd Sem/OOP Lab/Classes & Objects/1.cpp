/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
Assume Box is an entity with attributes length, width and height. WAP to calculate
the volume of the box.
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define PI 3.14

class Box_762
{
private:
    float length_762;
    float width_762;
    float height_762;

public:
    void setData_762(float length, float width, float height)
    {
        this->length_762 = length;
        this->width_762 = width;
        this->height_762 = height;
    }
    float getVolume_762()
    {
        return length_762 * width_762 * height_762;
    }
};

int main()
{
    Box_762 b1;
    float length_762;
    float width_762;
    float height_762;
    cout << "Enter length of the box: ";
    cin >> length_762;
    cout << "Enter width of the box: ";
    cin >> width_762;
    cout << "Enter height of the box: ";
    cin >> height_762;
    b1.setData_762(length_762, width_762, height_762);
    cout << "Volume: " << b1.getVolume_762() << endl;

    return 0;
}