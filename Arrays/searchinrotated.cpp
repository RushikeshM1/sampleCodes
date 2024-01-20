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
int binarysearch(int arr[], int target, int start, int end)
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
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int ans(int arrr[], int n, int target)
{
    int pivotele = findpivot(arrr, n);

    if (pivotele == -1)
    {
        return binarysearch(arrr, target, 0, n - 1);
    }

    if (arrr[pivotele] == target)
    {
        return pivotele;
    }
    if (target >= arrr[0])
    {
        return binarysearch(arrr, target, 0, pivotele - 1);
    }

    return binarysearch(arrr, target, pivotele + 1, n - 1);
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

    int myAns = ans(arr, n, target);

    cout << myAns;
    return 0;
}