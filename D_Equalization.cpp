#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute the minimum cost to achieve a total shift T (T = A+B)
    // Using distinct k values from 1 to 15, since 1+2+...+15 = 120 covers our T range.
    const int T_MAX = 120;
    const int K_MAX = 15;
    const ll INF = 1LL << 60;
    vector<ll> costDP(T_MAX + 1, INF);
    costDP[0] = 0;
    for (int k = 1; k <= K_MAX; k++)
    {
        ll addCost = (1LL << k); // cost of using operation with parameter k
        for (int t = T_MAX; t >= k; t--)
        {
            if (costDP[t - k] != INF)
                costDP[t] = min(costDP[t], costDP[t - k] + addCost);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        ull x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << "\n";
            continue;
        }

        const int MAX_EXP = 64;
        unordered_map<ull, int> bestX, bestY;

        // For x:
        for (int A = 0; A < MAX_EXP; A++)
        {
            ull v = (x >> A);
            if (!bestX.count(v) || bestX[v] > A)
                bestX[v] = A;
            if (v == 0)
                break; 
        }

        for (int B = 0; B < MAX_EXP; B++)
        {
            ull v = (y >> B);
            if (!bestY.count(v) || bestY[v] > B)
                bestY[v] = B;
            if (v == 0)
                break;
        }

        int bestSum = INT_MAX;
        for (auto &p : bestX)
        {
            ull val = p.first;
            if (bestY.find(val) != bestY.end())
            {
                int curSum = p.second + bestY[val];
                bestSum = min(bestSum, curSum);
            }
        }

        ll ans = costDP[bestSum];
        cout << ans << "\n";
    }

    return 0;
}
