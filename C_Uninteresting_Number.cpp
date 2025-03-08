#include <bits/stdc++.h>
using namespace std;

bool canObtainDivisibleBy9(const string &n) {
    int totalSum = 0;
    int count2 = 0, count3 = 0;
    for (char c : n) {
        int digit = c - '0';
        totalSum += digit;
        if (digit == 2) count2++;
        if (digit == 3) count3++;
    }
    
    // If already divisible by 9, we are done.
    if (totalSum % 9 == 0) return true;
    
    int target = (9 - (totalSum % 9)) % 9; // additional amount needed mod 9
    
    // Compute possible residues from operations on digit '2'
    // Each such operation adds +2.
    set<int> A;
    // If there are many 2's, we only need to consider up to 9 operations.
    int limit2 = min(count2, 9);
    for (int k = 0; k <= limit2; k++) {
        A.insert((2 * k) % 9);
    }
    
    // Compute possible residues from operations on digit '3'
    // Each such operation adds +6.
    set<int> B;
    if (count3 == 0) {
        B.insert(0);
    } else if (count3 == 1) {
        B.insert(0);
        B.insert(6 % 9); // which is 6
    } else {
        // For count3 >= 2, possible residues are {0, 6, 12 mod 9 -> 3}
        B.insert(0);
        B.insert(6 % 9); // 6
        B.insert((6 * 2) % 9); // 12 mod 9 = 3
    }
    
    // Check combinations from A and B
    for (int a : A) {
        for (int b : B) {
            if ((a + b) % 9 == target) return true;
        }
    }
    
    return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << (canObtainDivisibleBy9(n) ? "YES" : "NO") << "\n";
    }
    return 0;
}
