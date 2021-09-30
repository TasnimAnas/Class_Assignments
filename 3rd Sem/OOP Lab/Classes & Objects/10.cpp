/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP by defining a class called Complex that has floating point data members for storing real
and imaginary parts. The class has the following member functions:
 void set(float, float) to set the specified value in object
 void disp() to display complex number object
 complex sum(complex) to sum two complex numbers & return complex number

Write the definitions for each of the above member functions.
Write main function to create three complex number objects. Set the value in two
objects and call sum() to calculate sum and assign it in third object. Display all
complex numbers.

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
    void input_762()
    {
        cout << "Enter real part: ";
        cin >> real_762;
        cout << "Enter imaginary part: ";
        cin >> img_762;
    }
    void set_762(float real, float img)
    {
        this->real_762 = real;
        this->img_762 = img;
    }
    void display_762()
    {
        cout << "Complex number: " << real_762 << " + " << img_762 << "i" << endl;
    }
    Complex_762 sum(Complex_762 a, Complex_762 b)
    {
        Complex_762 x;
        x.real_762 = a.real_762 + b.real_762;
        x.img_762 = a.img_762 + b.img_762;
        return x;
    }
};

int main()
{
    Complex_762 a, b, c;
    a.input_762();
    a.display_762();
    b.input_762();
    b.display_762();
    c = c.sum(a, b);
    cout << endl
         << "3rd ";
    c.display_762();

    return 0;
}