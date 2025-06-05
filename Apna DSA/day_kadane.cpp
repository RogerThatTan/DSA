#include <bits/stdc++.h>
using namespace std;
// Maximum Subarray Sum

// Kadanes Algorithm Approach
int maxSubArray(vector<int> &nums)
{
    int currSum = 0, maxSum = INT_MIN;

    for (int val : nums)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    // int n = 5;
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int st = 0; st < n; st++)
    // {
    //     for (int end = st; end < n; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // Brute Force Approach

    // int n = 7;
    // int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    // int maxSum = INT_MIN;

    // for (int st = 0; st < n; st++)
    // {
    //     int currSum = 0;
    //     for (int end = st; end < n; end++)
    //     {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout << "Max subarray sum = " << maxSum << endl;

    return 0;
}