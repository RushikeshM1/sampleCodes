#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int reverse(int number)
{
    int n = number;
    int ans = 0;
    while (n > 0)
    {

        int remainder = n % 10;
        ans = ans * 10 + remainder;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int number;

    cin >> number;
    int ans = reverse(number);
    cout << "The reversed number is " << ans;
    return 0;
}