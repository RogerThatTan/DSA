#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zero = 0, one = 0;

        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }

        if (zero == one) cout << zero - 1 << endl;
        else cout << min(zero, one) << endl;
    }

    return 0;
}
