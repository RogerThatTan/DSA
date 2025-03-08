#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,p;
        cin>>n>>k>>p;
        if (k < -n * p || k > n * p) {
            cout << -1 << endl;
            continue;
        }
        int min = (abs(k) + p - 1) / p;

        if (min <= n) {
            cout << min << endl;
        } else {
            cout << -1 << endl;
        }


    }
    return 0;
}
