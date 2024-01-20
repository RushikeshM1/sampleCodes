#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstandlast(int arr[], int n, int target, bool firststartIndex)
{
    int ans = -1;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            if (firststartIndex)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
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
    return ans;
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

    int ans[] = {-1, -1};
    int start = firstandlast(arr, n, target, true);
    int end = firstandlast(arr, n, target, false);

    ans[0] = start;
    ans[1] = end;

    cout << ans[0] << " " << ans[1];

    return 0;
}