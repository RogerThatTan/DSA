#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int minus = 0, under = 0;
        for (char ch : s) {
            if (ch == '-') minus++;
            else under++;
        }
        if (minus < 2 || under == 0) {
            cout << 0 << '\n';
        } else {
            long long d1 = minus / 2;
            long long d2 = minus - d1;
            cout << under * d1 * d2 << '\n';
        }
    }
    return 0;
}