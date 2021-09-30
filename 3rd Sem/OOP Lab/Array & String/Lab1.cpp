#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Point
{
private:
    int x;
    int y;
public:
    Point() {}
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout << "Point - (" << x << "," << y << ")" << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;
    Point p1(x, y);
    p1.display();
    return 0;
}