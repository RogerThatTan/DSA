#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string S1, S2, S3;
        cin >> S1 >> S2 >> S3;
        
        // Compute count of zeros in each string.
        int c0[3] = {0, 0, 0};
        for(char ch : S1) c0[0] += (ch == '0');
        for(char ch : S2) c0[1] += (ch == '0');
        for(char ch : S3) c0[2] += (ch == '0');
        
        int totalZeros = c0[0] + c0[1] + c0[2];
        
        // Only possible if totalZeros is 0, N, 2N, or 3N.
        if(totalZeros != 0 && totalZeros != N && totalZeros != 2*N && totalZeros != 3*N){
            cout << -1 << "\n";
            continue;
        }
        
        // Already uniform if all 0's or all 1's.
        if(totalZeros == 0 || totalZeros == 3*N){
            cout << 0 << "\n";
            continue;
        }
        
        int ans = 1e9;
        // If totalZeros == N, then exactly one string must be all 0's and two must be all 1's.
        if(totalZeros == N){
            for(int i = 0; i < 3; i++){
                // Choose string i to become all 0's.
                // It currently has c0[i] zeros, so mismatches (extra 1's) = N - c0[i].
                int cost = N - c0[i];
                // For the other two strings (set to 1), mismatches = (their count of 0's).
                // Their total mismatches: (c0[j] + c0[k]) = (N - c0[i]) automatically since:
                // c0[i] + (c0[j]+c0[k]) = totalZeros = N.
                ans = min(ans, cost);
            }
        }
        // If totalZeros == 2N, then exactly two strings must be all 0's and one must be all 1's.
        else if(totalZeros == 2*N){
            for(int i = 0; i < 3; i++){
                // Choose string i to become all 1's.
                // It currently has c0[i] zeros, which are mismatches for a string that should be all 1's.
                int cost = c0[i];
                // For the other two strings (set to 0), mismatches = (their extra 1's) = (N - c0[j] + N - c0[k])
                // and since c0[i] + c0[j] + c0[k] = 2N, we have (N - c0[j] + N - c0[k]) = c0[i].
                ans = min(ans, cost);
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
