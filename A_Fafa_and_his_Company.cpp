#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != n)
                count++;
            if (n / i != i && (n / i) != n)
                count++;
        }
    }
    cout << count << endl;
}