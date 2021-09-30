/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to find the electricity bill of a person. Unit tariff is as follows –

Low Slab     High Slab       Rate in INR
1            50              1.5
51           100             2.5
101          200             3.5
201          Above           4.5

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Bill_762
{
private:
    int slab_762;

public:
    Bill_762()
    {
        slab_762 = 0;
    }
    void setSlab_762(int slab)
    {
        this->slab_762 = slab;
    }
    float getBill_762()
    {
        if (slab_762 >= 1 && slab_762 <= 50)
            return (float)slab_762 * 1.5;
        else if (slab_762 >= 51 && slab_762 <= 100)
            return (float)slab_762 * 2.5;
        else if (slab_762 >= 101 && slab_762 <= 200)
            return (float)slab_762 * 3.5;
        else if (slab_762 >= 201)
            return (float)slab_762 * 4.5;
        else
            return 0;
    }
};

int main()
{
    Bill_762 p_762;
    int slab_762;
    cout << "Enter total slab: ";
    cin >> slab_762;
    p_762.setSlab_762(slab_762);
    cout << "Bill: " << p_762.getBill_762() << endl;

    return 0;
}