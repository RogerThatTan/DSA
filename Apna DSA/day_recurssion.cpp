#include <bits/stdc++.h>
using namespace std;

void printNumber(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    cout << n << " " << endl;
    printNumber(n - 1);
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int sumofN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumofN(n - 1);
}

int fibo(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int BS(int arr[], int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tar)
            return mid;
        else if (arr[mid] <= tar)
        {
            return BS(arr, tar, mid + 1, end);
        }
        else
        {
            return BS(arr, tar, st, mid - 1);
        }
    }
    return -1;
}

int main()
{
    // printNumber(4);
    // cout << fact(5) << endl;
    // cout << sumofN(5) << endl;
    // cout << fibo(5) << endl;

    int arr[4] = {1, 2, 3, 4};
    cout << BS(arr, 4, 0, 4);
    cout << endl;
    cout << gcd(18, 12);

    return 0;
}