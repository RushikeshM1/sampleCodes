#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
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

    int ans = secondLargest(arr, n);
    cout <<"Second largest element is " <<ans;
    return 0;
}