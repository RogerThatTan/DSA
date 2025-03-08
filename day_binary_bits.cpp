#include <bits/stdc++.h>
using namespace std;

int decToBianry(int decNum)
{
    int ans = 0;
    int power = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * power);
        power = power * 10;
    }
    return ans;
}

int biNum(int num)
{
    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem = num % 10;
        ans += rem * pow;
        num /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{

    // int decNum = 50;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << decToBianry(i) << endl;
    // }
    int binNum = 101;
    cout << biNum(binNum) << endl;

    int decNum = -10;
    cout << decToBianry(decNum) << endl;
    return 0;
}