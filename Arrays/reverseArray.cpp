#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// DATE --> 03-07-2023

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverseArrayy(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    reverseArrayy(arr, n);
    cout << "Reversed  array is " << endl;
    displayArray(arr, n);
    return 0;
}