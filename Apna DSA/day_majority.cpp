#include <bits/stdc++.h>
using namespace std;
// brute approach

// int majorityElement(vector<int> &nums)
// {
//     for (int val : nums)
//     {
//         int freq = 0;
//         for (int el : nums)
//         {
//             if (el == val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > nums.size() / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// slightly optimize than brute force

// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     // freq count

//     int freq = 1, ans = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = nums[i];
//         }
//         if (freq > n / 2)
//         {
//             return ans;
//         }
//     }
//     return ans;
// }

// MOORES ALGO

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        else if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    int count = 0;
    for (int val : nums)
    {

        if (val == ans)
            count++;
    }
    if (count > n / 2)
    {
        return ans;
    }
    else
        return -1;
}

int main()
{
    vector<int> nums = {3, 3, 4};
    cout << majorityElement(nums) << endl;

    return 0;
}