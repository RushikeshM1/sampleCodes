#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//DATE --> 03-07-2023
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int maxiElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
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
    int ans = maxiElement(arr, n);
    cout << "The maximum element in array is " << ans << endl;

    return 0;
}