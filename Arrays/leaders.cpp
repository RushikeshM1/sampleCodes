#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void Leaders(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true )
        {
            cout << arr[i] << " ";
        }
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

    Leaders(arr, n);

    return 0;
}