#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int ans = 0;
        int check = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                check++;
                ans = max(ans, check);
            }
            else
            {
                check = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}