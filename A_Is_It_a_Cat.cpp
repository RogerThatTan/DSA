#include <bits/stdc++.h>
using namespace std;

bool isCatMeowing(string s) {
    string target = "meow";
    string filtered = "";
    
    for (char c : s) {
        c = tolower(c);
        if (filtered.empty() || filtered.back() != c) {
            filtered += c;
        }
    }

    return filtered == target;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (isCatMeowing(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
