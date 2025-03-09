#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int h[n], a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[j] == h[i])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}