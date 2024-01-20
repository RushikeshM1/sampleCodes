#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMissing(int arr[], int n)
{
    int sum = (10 * 11) / 2;

    int acutalSum = 0;

    for (int i = 0; i < n; i++)
    {
        acutalSum = acutalSum + arr[i];
    }

    return (sum - acutalSum);
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

    int ans = findMissing(arr, n);

    cout << ans;
    return 0;
}