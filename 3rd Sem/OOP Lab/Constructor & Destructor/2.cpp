/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
Define a class called Complex that stores real and imaginary part of the
complex number. WAP that uses overloaded constructors for initializing the
class objects and also display the part.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Complex_762
{
private:
    float real_762;
    float img_762;

public:
    Complex_762()
    {
        real_762 = 0;
        img_762 = 0;
    }
    Complex_762(float real_762, float img_762)
    {
        this->real_762 = real_762;
        this->img_762 = img_762;
    }
    void display_762()
    {
        cout << "Complex number: " << real_762 << " + " << img_762 << "i" << endl;
    }
    ~Complex_762()
    {
        delete &real_762;
        delete &img_762;
    }
};

int main()
{
    int real_762, img_762;
    cout << "Enter real part: ";
    cin >> real_762;
    cout << "Enter imaginary part: ";
    cin >> img_762;
    Complex_762 c(real_762, img_762);
    c.display_762();
    return 0;
}