#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int zero = count(s.begin(), s.end(), '0');
    int one = n - zero;

    if (zero == n || one == n)
    {
        cout << "NO\n";
        return;
    }

    if (zero % 2 == 1 && one % 2 == 1)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
