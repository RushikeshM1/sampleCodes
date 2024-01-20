#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int len = 0;
    int k;
    cin >> k;
    int arr[] = {1, 2, 3, 1, 1, 1, 1};

    for (int i = 0; i < 7; i++)
    {
        int sum = 0;
        for (int j = i; j < 7; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len;
    return 0;
}