#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallIDX = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallIDX])
            {
                smallIDX = j;
            }
        }
        swap(arr[i], arr[smallIDX]);
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
    vector<int> arr = {4, 5, 63, 3, 7, 8, 2, 1, 0};
    int n = arr.size();
    selectionSort(arr, n);
    printVector(arr, n);
    return 0;
}