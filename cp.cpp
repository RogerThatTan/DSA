#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;
    while (t--)
    {
        cin >> n >> x;
        int sum = n * x;
        int final = sum / 4;
        if (sum % 4 == 0)
            cout << final << endl;
        else
            cout << final + 1 << endl;
    }

    return 0;
}
