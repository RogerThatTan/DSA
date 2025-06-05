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

        int first = s[0] - '0';
        int last = s[2] - '0';

        if ((s[1] == '>' && first > last) || (s[1] == '<' && first < last) || (s[1] == '=' && first == last))
        {
            cout << s << endl;
        }
        else
        {
            if (first < last)
            {
                s[1] = '<';
            }
            else if (first == last)
            {
                s[1] = '=';
            }
            else
            {
                s[1] = '>';
            }
            cout << s << endl;
        }
    }
    return 0;
}