#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int binarysearch(int arr[], int target, int startt, int endd)
{
    while (startt <= endd)
    {
        int mid = startt + (endd - startt) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            startt = mid + 1;
        }
        else
        {
            endd = mid - 1;
        }
    }
    return -1;
}

int ans(int arr[], int target)
{
    int start = 0;
    int end = 1;

    while (target > arr[end])
    {
        int temp = end + 1;

        end = end + (end - start + 1)* 2;

        start = temp;
    }
    return binarysearch(arr, target, start, end);
}
int main()
{
    int arr[] = {1, 2, 3, 10, 11, 30, 40, 50, 60, 70, 88, 98};

    int anss = ans(arr, 98);

    cout << anss;
    return 0;
}