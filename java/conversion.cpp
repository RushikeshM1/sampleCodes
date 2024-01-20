#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void convert(int n)
{
    int i=0;
    int arr[10];
    
    while (n > 0)
    {   
        
        int remainder = n % 2;
        arr[i] = remainder;
        i++;
        n=n/2;
        // cout<<remainder<<" ";
        cout<<i<<" ";  
        
    }

    // for (int j = i-1; j >= 0; j--)
    // {
    //     cout << arr[j] << " ";
    // }
}
int main()
{
    int n = 10;
    convert(n);
    return 0;
}