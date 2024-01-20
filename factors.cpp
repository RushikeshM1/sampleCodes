#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int number;

    cin >> number;

    // for (int i = 1; i <= number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            if (number / i == i)
            {
                cout << i << " ";
            }
            else
            {
                cout << i << " " << number / i << " ";
            }
        }
    }

    return 0;
}