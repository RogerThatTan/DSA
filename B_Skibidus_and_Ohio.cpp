#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int min_length = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[i - 1])
            {
                min_length++;
            }
        }

        cout << min_length << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
