#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int a[n], freq[21] = {0}; 

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int score = 0;

    for (int i = 1; i <= n; i++) {
        score += freq[i] / 2;
    }

    cout << score << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
