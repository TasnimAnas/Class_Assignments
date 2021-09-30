/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to find the occurrences of the largest digit of a number within a set of
numbers.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
class Numbers_762
{
private:
    int totalNumbers_762;
    int *arr_762;

public:
    Numbers_762()
    {
        totalNumbers_762 = 0;
        arr_762 = NULL;
    }
    void createArray_762()
    {
        cout << "Enter size of the number set: ";
        cin >> totalNumbers_762;
        arr_762 = (int *)calloc(totalNumbers_762, sizeof(int));
        cout << "Enter values to the numberset: ";
        for (int i = 0; i < totalNumbers_762; i++)
        {
            cin >> arr_762[i];
        }
    }
    void occurrence_762()
    {
        int max_762 = arr_762[0];
        int count_762 = 0;
        for (int i = 0; i < totalNumbers_762; i++)
        {
            if (arr_762[i] > max_762)
            {
                count_762 = 1;
                max_762 = arr_762[i];
            }
            else if (arr_762[i] == max_762)
            {
                count_762++;
            }
        }
        cout << "Max number: " << max_762 << endl
             << "Occurrence: " << count_762 << endl;
    }
};

int main()
{
    Numbers_762 n;
    n.createArray_762();
    n.occurrence_762();

    return 0;
}