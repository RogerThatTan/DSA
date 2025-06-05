#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    int gr = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (vec[i] != vec[i - 1])
        {
            gr++;
        }
        }

    cout << gr << endl;

    return 0;
}