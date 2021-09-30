/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to find the occurrence of the largest number within a set of numbers with
following specification
 Take an array of numbers as input (dynamically allocated).
 Then take any position of the array within the range.
 Check whether that element exists or not, if yes find the occurrence locations
and number of occurrences.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Numbers_762
{
private:
    int totalNumbers_762;
    int *arr_762;
    int *loc;

public:
    Numbers_762()
    {
        totalNumbers_762 = 0;
        arr_762 = NULL;
        loc = NULL;
    }
    void createArray_762()
    {
        cout << "Enter size of the number set: ";
        cin >> totalNumbers_762;
        arr_762 = (int *)calloc(totalNumbers_762, sizeof(int));
        loc = (int *)calloc(totalNumbers_762, sizeof(int));
        cout << "Enter values to the numberset: ";
        for (int i = 0; i < totalNumbers_762; i++)
        {
            cin >> arr_762[i];
        }
    }
    void occurrence_762()
    {
        int num;
        cout << "Enter number to find: ";
        cin >> num;
        int count = 0;
        for (int i = 0; i < totalNumbers_762; i++)
        {
            if (arr_762[i] == num)
            {
                loc[count] = i;
                count++;
            }
        }
        cout << "Occurrence: " << count << endl
             << "Occurrence position: ";
        for (int i = 0; i < count; i++)
        {
            cout << loc[i] << " ";
        }
    }
};

int main()
{
    Numbers_762 n;
    n.createArray_762();
    n.occurrence_762();

    return 0;
}