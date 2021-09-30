/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to represent a student class with roll no, name and section and a
test class (derived class of student) representing the scores of the
student in 5 subjects and sport class (derived class of student)
representing the score in a sport. The sport and test class should be
inherited by a result class having the functionality to add the scores and
display the final result for a student.

*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,x1,x2;
    cout<<"Enter the coefficients of a,b and c: ";
    cin>>a>>b>>c;
    int discriminant=b*b-4*a*c;
    int i,r;
    if(discriminant>0){
        x1=(-b+discriminant)/(2*a);
        x2=(-b-discriminant)/(2*a);
        cout<<"Roots are real and diferent"<<endl;
        cout<<"Root 1= "<<x1<<endl;
        cout<<"Root 2= "<<x2<<endl;
    }
    else if(discriminant==0){
        x1=x2=b/(2*a);
        cout<<"Roots are real and equal"<<endl;
        cout<<"Root 1 and Root 2= "<<x1;
    }
    else if(discriminant<0){
        r=-b/(2*a);
        i=sqrt(-discriminant/(2*a));
        cout<<"Roots are complex and different"<<endl;
        cout<<"Root 1= "<<r<<"+"<<i<<endl;
        cout<<"Root 2= "<<r<<"-"<<i<<endl;
    }
    return 0;
}
