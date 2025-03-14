#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printVector(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {0, 2, 4, 3, 5, 6, 7};
    int n = arr.size();
    insertionSort(arr, n);
    printVector(arr, n);
    return 0;
}