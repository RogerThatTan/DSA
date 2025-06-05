#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vector<int> res;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size() - 1; i++)
    {
        res.push_back(vec[vec.size() - 1] - vec[i]);
    }

    for (int c : res)
    {
        cout << c << " ";
    }

    return 0;
}