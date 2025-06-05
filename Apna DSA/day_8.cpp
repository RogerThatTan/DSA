#include <bits/stdc++.h>
using namespace std;

void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
// 2pointer approach
void reversedArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    // int n = 10;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // int smallest_Index = -1;

    // for (int i = 0; i < n; i++)
    // {
    //     // one way
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //         smallest_Index = i;
    //     }

    //     // second way

    //     // smallest = min(arr[i], smallest);
    //     largest = max(arr[i], largest);
    // }
    // cout << "Smallest Number & Index Number is : " << smallest << " " << smallest_Index << endl;
    // cout << "Largest Number: " << largest << endl;

    // int arr[] = {1, 2, 3};
    // changeArr(arr, 3);
    // cout << "Array elements are: " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // linear search

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int target = 8;
    int size = 7;
    // cout << linearSearch(arr, size, target);
    reversedArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}