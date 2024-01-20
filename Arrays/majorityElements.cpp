#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int major(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else{
                count=0;
            }
        }
        if (count > n / 2)
        {
            return count;
        }
    }
    //     map<int, int> mapp;

    //     for (int i = 0; i < n; i++)
    //     {
    //         mapp[arr[i]]++;
    //     }
    //     map<int, int>::iterator it = mapp.begin();

    //     for (auto it : mapp)
    //     {
    //         if (it.second > (n / 2))
    //         {
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }
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

    int ans = major(arr, n);
    cout << ans;
    return 0;
}