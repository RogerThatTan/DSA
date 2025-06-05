#include <bits/stdc++.h>
using namespace std;

// int printHello()
// {
//     cout << "Hello from functions" << endl;
//     return 3;
// }

// // sum of 2 numbers

// int sum(int a, int b)
// {
//     int s = a + b;
//     return s;
// }

// int find_Min(int a, int b)
// {
//     if (a > b)
//         return b;
//     else
//         return a;
// }

// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int factorial(int n)
// {
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac = fac * i;
//     }
//     return fac;
// }

// int find_nCr(int x, int y)
// {
//     int ncr = factorial(x) / (factorial(y) * factorial(x - y));
//     return ncr;
// }

// int sumOFDigits(int x)
// {

//     int digitSum = 0;
//     while (x > 0)
//     {
//         int lastDig = x % 10;
//         x = x / 10;
//         digitSum += lastDig;
//     }

//     return digitSum;
// }

int reverse(int n)
{
    int res = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n / 10;
    }
    return res;
}

bool isPalindrome(int n)
{
    int revNum = reverse(n);
    return n == revNum;
}

int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num = num / 10;
        sum += lastDig;
    }
    return sum;
}

int abSquare(int a, int b)
{
    return a * a + b * b + 2 * a * b;
}

int printLargest(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= c)
    {
        return b;
    }
    else
        return c;
}

char genNextChar(char ch)
{
    if (ch == 'z')
        return 'a';
    else
        return ch + 1;
}

int main()
{

    cout << isPalindrome(312) << endl;
    cout << digitSum(22) << endl;
    cout << abSquare(1, 2) << endl;
    cout << printLargest(3, 3, 3) << endl;
    cout << genNextChar('z') << endl;
    // cout << find_nCr(8, 2);
    // cout << sumOFDigits(2356);
    // cout << sumN(5) << endl;
    // cout << sumN(10) << endl;
    // cout << factorial(5) << endl;

    // cout << printHello() << endl;
    // cout << sum(10, 5) << endl;
    // cout << find_Min(10, 5) << endl;

    return 0;
}