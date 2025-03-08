#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> nums(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int power = 0;
        while(x % 2 == 0) {
            power++;
            x /= 2;
        }
        nums[i] = {power, x};
    }
    
    sort(nums.rbegin(), nums.rend());
    
    long long s = 0;
    int points = 0;
    
    for(int i = 0; i < n; i++) {
        long long curr = nums[i].second * (1LL << nums[i].first);
        s += curr;
        
        if(s % 2 == 0) {
            points++;
            while(s % 2 == 0) s /= 2;
        }
    }
    
    cout << points << '\n'; 
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}