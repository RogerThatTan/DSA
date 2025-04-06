#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minOps = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int ops = abs(arr[i]);
        if (ops < minOps)
        {
            minOps = ops;
        }
    }

    cout << minOps << endl;
    return 0;
}
