#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findpivot(int arr[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid < end && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid > start && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        if (arr[mid] <= arr[start])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
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

    int ans =findpivot(arr, n);

    cout<<ans;
    return 0;
}