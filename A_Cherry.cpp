#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long maxProduct = 0;

    for (int i = 0; i < n - 1; i++)
    {
        maxProduct = max(maxProduct, a[i] * a[i + 1]);
    }

    cout << maxProduct << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}