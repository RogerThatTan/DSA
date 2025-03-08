#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    unordered_map<int, int> freq;
    unordered_map<int, int> index;

    // Read input and count frequency
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;      // Count occurrences
        index[a[i]] = i+1; // Store 1-based index
    }

    int min_unique = INT_MAX, winner = -1;

    // Find the smallest unique number and its index
    for (auto& [num, count] : freq) {
        if (count == 1 && num < min_unique) {
            min_unique = num;
            winner = index[num]; // Get the 1-based index
        }
    }

    cout << winner << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
