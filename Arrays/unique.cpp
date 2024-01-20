#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int findunique(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && i < n)
        {
            continue;
        }
        else
        {
            return arr[i];
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

    int ans = findunique(arr, n);
    cout << ans;
    return 0;
}