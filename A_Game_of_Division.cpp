#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        int win = -1;

        for (int i = 0; i < n; i++)
        {
            bool canWin = true;

            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(vec[i] - vec[j]) % k == 0)
                {
                    canWin = false;
                    break;
                }
            }
            if (canWin)
            {
                win = i + 1;
                break;
            }
        }
        if (win == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << win << endl;
        }
    }

    return 0;
}