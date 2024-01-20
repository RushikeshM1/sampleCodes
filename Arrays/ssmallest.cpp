#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int secondsmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallestt = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallestt = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < ssmallestt)
        {
            ssmallestt=arr[i];
        }
    }
    return ssmallestt;
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

    int ans = secondsmallest(arr, n);
    cout << "Second smallest element is " << ans;
    return 0;
}