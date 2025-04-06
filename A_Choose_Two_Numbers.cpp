#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    unordered_set<int> setA(A.begin(), A.end());
    unordered_set<int> setB(B.begin(), B.end());

    for (int a : A)
    {
        for (int b : B)
        {
            int sum = a + b;
            if (setA.find(sum) == setA.end() && setB.find(sum) == setB.end())
            {
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }

    return 0;
}