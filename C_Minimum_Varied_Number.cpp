#include <bits/stdc++.h>
using namespace std;

int solve(int s)
{
    vector<int> digits;
    for (int d = 9; d > 0; d--)
    {
        if (s >= d)
        {
            digits.push_back(d);
            s -= d;
        }

        if (s == 0)
        {
            break;
        }
    }
    sort(digits.begin(), digits.end());
    int res = 0;
    for (int d : digits)
    {
        res = res * 10 + d;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;

        cout << solve(s) << endl;
    }
    return 0;
}