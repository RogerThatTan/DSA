#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int m = k + 1;

        const ll NEG = -1e18;
        vector<vector<vector<ll>>> dp(2, vector<vector<ll>>(m + 1, vector<ll>(4, NEG)));

        dp[0][0][0] = 0;

        int cur = 0, nxt = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                for (int s = 0; s < 4; s++)
                {
                    dp[nxt][j][s] = NEG;
                }
            }
            int pos = i + 1;
            for (int j = 0; j <= m; j++)
            {
                for (int s = 0; s < 4; s++)
                {
                    ll curVal = dp[cur][j][s];
                    if (curVal == NEG)
                        continue;
                    int f = s / 2;
                    int p = s % 2;
                    dp[nxt][j][f * 2 + 0] = max(dp[nxt][j][f * 2 + 0], curVal);

                    if (j < m)
                    {
                        ll add = a[pos];
                        int nf = f;
                        if (pos == 1 || pos == n)
                            nf = 1;
                        if (p == 1)
                            nf = 1;
                        int np = 1;
                        dp[nxt][j + 1][nf * 2 + np] = max(dp[nxt][j + 1][nf * 2 + np], curVal + add);
                    }
                }
            }
            swap(cur, nxt);
        }

        ll ans = NEG;
        for (int s = 0; s < 4; s++)
        {
            int f = s / 2;
            if (f == 1)
            {
                ans = max(ans, dp[cur][m][s]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
