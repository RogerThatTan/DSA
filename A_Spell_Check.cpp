#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string timur = "Timur"; 
    sort(timur.begin(), timur.end());
    sort(s.begin(), s.end());

    if (n == 5 && s == timur)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
