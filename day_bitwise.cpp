#include <bits/stdc++.h>
using namespace std;

int revINT(int num)
{
    int rev = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        rev = (rev * 10) + lastDig;
        num = num / 10;
    }
    return rev;
}

int main()
{
    int a = 10, b = 2;
    cout << (a >> b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;

    unsigned x = -10;
    cout << x << endl;
    cout << sizeof(unsigned) << endl;

    int num = 123;
    cout << revINT(num) << endl;
    return 0;
}