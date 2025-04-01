#include <bits/stdc++.h>
using namespace std;

bool Sqaure(long long x)
{
    if (x >= 0)
    {
        long long sq = sqrt(x);
        return (sq * sq == x);
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (!Sqaure(n))
        {
            cout << "No" << endl;
        }
        else
        {
            int x = sqrt(n);
            int a = count(s.begin(), s.end(), '1');
            int b = count(s.begin(), s.end(), '0');
            if (a == x * 4 - 4)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}