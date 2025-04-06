#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int side = max({2 * min(a, b), max(a, b)});
    cout << side * side << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
