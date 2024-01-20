#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int orderAgnosticss(int arr[], int target, int start, int end)
{

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
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
int peakIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return arr[start];
}
int search(int arr[], int target, int n)
{
    int peak = peakIndex(arr, n);
    int firstAttempt = orderAgnosticss(arr, target, 0, peak);

    if (firstAttempt != -1)
    {
        return firstAttempt;
    }
    return orderAgnosticss(arr, target, peak + 1, n - 1);
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
    int target;
    cin >> target;

    int ans = search(arr, n, target);

    cout << ans;
    return 0;
}
//0 1 2 4 2 1

