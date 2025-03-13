#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int countA = 0;
        int countB = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                countA++;
            else
                countB++;
        }

        if ((5 - countA) > (5 - countB))
            cout << "B" << endl;
        else
            cout << "A" << endl;
    }

    return 0;
}