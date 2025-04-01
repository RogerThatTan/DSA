#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string target = "codeforces";
    int count = 0;
    while (t--)
    {
        char s;
        cin >> s;
        bool found = false;
        for (int i = 0; i < target.size(); i++)
        {
            if (s == target[i])
            {
                found = true;
                break;
                        }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}