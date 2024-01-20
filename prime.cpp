#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
}
int main()
{
    int a, n;
    cin >> a >> n;

    for (int i = a; i < n; i++)
    {
        if (checkPrime(i))
        {
            cout << i << " is a prime number" << endl;
        }
    }

    return 0;
}