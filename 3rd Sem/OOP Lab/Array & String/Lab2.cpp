/*WAP by defining a class called Complex that has floating point data members for
storing real and imaginary parts. The class has the following member functions:
 void set(float, float) to set the specified value in object
 void disp() to display complex number object
 complex sum(complex) to sum two complex numbers & return complex
number
Write the definitions for each of the above member functions.
Write main function to create three complex number objects. Set the value in two
objects and call sum() to calculate sum and assign it in third object. Display all
complex numbers.*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Complex
{
private:
    float Real;
    float Imaginary;

public:
    void set(float Real, float Imaginary)
    {
        this->Real = Real;
        this->Imaginary = Imaginary;
    }
    void display()
    {
        cout << "Complex number: " << Real << " + i" << Imaginary << endl;
    }
    Complex sum(Complex a, Complex b)
    {
        Complex result;
        result.Real = a.Real + b.Real;
        result.Imaginary = a.Imaginary + b.Imaginary;
        return result;
    }
};

int main()
{
    float Real, Imaginary;
    cout << "1st number -" << endl;
    cout << "Enter real part: ";
    cin >> Real;
    cout << "Enter imaginray part: ";
    cin >> Imaginary;
    Complex n;
    n.set(Real, Imaginary);
    n.display();

    cout << "2nd number -" << endl;
    cout << "Enter real part: ";
    cin >> Real;
    cout << "Enter imaginray part: ";
    cin >> Imaginary;
    Complex n2;
    n2.set(Real, Imaginary);
    n2.display();

    Complex sum;
    sum = sum.sum(n, n2);
    cout << "Affter sum: ";
    sum.display();
    return 0;
}