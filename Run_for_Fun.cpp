#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    int bb = 0;

    if (y > x)
    {
        bb = y / x;
        if (y % x == 0)
        {
            bb = bb - 1;
        }
    }

    cout << bb << endl;

    return 0;
}