#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int isLargest(int arr[], int start, int end)
{
    int max = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - i - 1;
        int maxi = isLargest(arr, start, end);

        swap(arr, maxi, end);
    }

    // int maxi = isLargest(arr, n);
    // cout << maxi;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}