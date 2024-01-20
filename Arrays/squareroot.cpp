#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int squareroot(int n)
{
    int start = 0;
    int end = n;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
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

    int ans = squareroot(n);

    cout << ans;
    return 0;
}