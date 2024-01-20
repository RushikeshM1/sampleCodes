#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ans(int arr[], int n, int target, bool firstindex)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i] + arr[j] == target)
            {
                if (firstindex)
                {
                    return arr[i];
                }
                else
                {
                    return arr[j];
                }
            }
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

    int target;
    cin >> target;
    int anss[] = {-1, -1};
    int first = ans(arr, n, target, true);
    int second = ans(arr, n, target, false);

    anss[0] = first;
    anss[1] = second;

    cout << anss[0] << " " << anss[1];

    return 0;
}