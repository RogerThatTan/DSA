#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int N;
        long long X;
        cin >> N >> X;
        vector<long long> A(N);
        for (int i = 0; i < N; i++){
            cin >> A[i];
        }
 
        // If X==1, operation leaves array unchanged.
        if(X == 1){
            unordered_map<long long,int> freq;
            int best = 0;
            for(auto a : A){
                freq[a]++;
                best = max(best, freq[a]);
            }
            cout << best << "\n";
            continue;
        }
 
        // freq: original frequency of each number in A.
        unordered_map<long long, int> freq;
        for (int i = 0; i < N; i++){
            freq[A[i]]++;
        }
 
        // events: for candidate final value v, store pairs (index, delta)
        // Each index i affects exactly two candidate values:
        //   - It would be converted to v = A[i]*X (contribution +1).
        //   - If operated on, an index originally equal to v loses its value v (contribution -1).
        unordered_map<long long, vector<pair<int,int>>> events;
        events.reserve(2*N);
 
        for (int i = 0; i < N; i++){
            long long a = A[i];
            long long conv = a * X;  // candidate if we convert a
            
            // For candidate conv: index i gives +1 (it becomes conv when multiplied)
            events[conv].push_back({i, 1});
            
            // For candidate a: index i gives -1 (if multiplied, we lose an original occurrence)
            events[a].push_back({i, -1});
        }
 
        // Best answer starts as the best frequency if we do nothing.
        int ans = 0;
        for (auto &p : freq) {
            ans = max(ans, p.second);
        }
 
        // For each candidate v, compute the best extra gain from a contiguous segment
        for (auto &p : events){
            long long v = p.first;
            auto &vec = p.second;
            // sort by index so that the order is the same as in the original array
            sort(vec.begin(), vec.end(), [](auto &p1, auto &p2){
                return p1.first < p2.first;
            });
 
            int best_local = 0, cur = 0;
            // Kadane's algorithm on the sparse list.
            // (Note: gaps between indices effectively add zeros, so they don't change the sum.)
            for (auto &ev : vec){
                cur += ev.second;
                if(cur < 0) cur = 0;
                best_local = max(best_local, cur);
            }
 
            // Final frequency for candidate v = (original frequency of v) + (best extra gain, if any)
            int base = (freq.count(v) ? freq[v] : 0);
            ans = max(ans, base + best_local);
        }
 
        cout << ans << "\n";
    }
    return 0;
}
