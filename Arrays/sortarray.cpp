#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort(arr, arr + n);
    int k;
    cin >> k;
    // cout << "The second largest element is " << arr[n - k] << endl;

    // cout << "The second smallest element is " << arr[k - 1] << endl;

    // rotate array by k elemnts

    for (int i = 0; i < n; i++)
    {
        cout << arr[(k+i) % n] << " ";
    }

    return 0;
}
//七転日 やお気//