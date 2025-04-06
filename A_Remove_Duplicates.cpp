#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    set<int> seen;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.find(vec[i]) == seen.end())
        {
            ans.push_back(vec[i]);
            seen.insert(vec[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int val : ans)
    {
        cout << val << " ";
    }

    return 0;
}