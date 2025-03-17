#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k)
{
    if (n % 2 == 0)
    {
        return (n + (k - 1) - 1) / (k - 1);
    }
    else
    {
        return 1 + ((n - k) + (k - 1) - 1) / (k - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}