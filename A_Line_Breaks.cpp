#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    int totalLength = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (totalLength + words[i].length() <= m) {
            totalLength += words[i].length();
            count++;
        } else {
            break;  
        }
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve();
    }

    return 0;
}
