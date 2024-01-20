#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void rotate(int arr[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[(i + k) % n] << " ";
    }
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
    int k;
    cin >> k;

    rotate(arr, k, n);

    return 0;
}