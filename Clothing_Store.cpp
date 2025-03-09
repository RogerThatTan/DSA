#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        int diLarge = min(z, c);
        int xlLeft = z - diLarge;
        int satisfied = 0;

        for (int i = 0; i <= xlLeft; i++)
        {
            int large = y + i;
            int diMedium = min(large, b);
            int largeLeft = large - diMedium;
            int smallLeft = x + (xlLeft - i) + largeLeft;
            int diSmall = min(smallLeft, a);

            int all = diMedium + diLarge + diSmall;
            if (all > satisfied)
            {
                satisfied = all;
            }
        }

        cout << satisfied << endl;
    }

    return 0;
}
