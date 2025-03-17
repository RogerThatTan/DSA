#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_set<int> setA(a.begin(), a.end());

    vector<int> sortedValues(setA.begin(), setA.end());
    sort(sortedValues.begin(), sortedValues.end());

    if (sortedValues.size() < 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << sortedValues[1] << endl;
    }
    return 0;
}