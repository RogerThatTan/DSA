#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, x;
        ll k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        
        // Precompute prefix differences:
        // prefix[i] = net change after i commands, where 'R' = +1 and 'L' = -1.
        vector<int> prefix(n+1, 0);
        for (int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + (s[i-1]=='R' ? 1 : -1);
        }
        
        ll countResets = 0; // number of times robot enters 0
        // Cycle 1: starting at x (which is nonzero).
        int cycleTime = -1;
        for (int i = 1; i <= n; i++){
            if(x + prefix[i] == 0){
                cycleTime = i;
                break;
            }
        }
        if(cycleTime == -1 || k < cycleTime){
            // If cycle 1 never hits 0 or we don't have enough seconds,
            // then no reset occurs.
            cout << 0 << "\n";
            continue;
        }
        // Complete cycle 1:
        countResets++;       // reached 0 once
        k -= cycleTime;      // subtract seconds used
        
        // Subsequent cycles: now starting from 0.
        // We need the first time (within the sequence) that starting at 0, the robot reaches 0.
        int d0 = -1;
        for (int i = 1; i <= n; i++){
            if(prefix[i] == 0){ // 0 + prefix[i] == 0
                d0 = i;
                break;
            }
        }
        if(d0 == -1){
            // From 0, the robot will never hit 0 again (before finishing the sequence).
            cout << countResets << "\n";
            continue;
        }
        // Each complete cycle from 0 takes d0 seconds and yields one reset.
        ll fullCycles = k / d0;
        countResets += fullCycles;
        k %= d0;  // seconds left after full cycles
        
        // Simulate the remaining partial cycle.
        int pos = 0;
        for (int i = 1; i <= (int)k; i++){
            pos += (s[i-1]=='R' ? 1 : -1);
            if(pos == 0){
                countResets++;
                break;
            }
        }
        
        cout << countResets << "\n";
    }
    return 0;
}
