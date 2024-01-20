#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// int hcf(int number1, int number2)
// {
//     if (number1 == 0)
//     {
//         return number2;
//     }
//     return hcf(number2 % number1, number1);
// }
int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    // int gcd = hcf(number1, number2);
    // cout << "The HCF of two numbers number1 " << number1 << " and number2 " << number2 << " is : " << gcd << endl;

    // int lcm = number1 * number2 / gcd;

    // cout << "The LCM of two numbers number1 " << number1 << " and number2 " << number2 << " is : " << lcm << endl;

    for (int i = 1; i <= number1; i++)
    {
        int number1multiple = number1 * i;

        int number2multiple;
        bool ans;
        for (int j = 1; j <= number2; j++)
        {
            number2multiple = number2 * j;
            ans = number1multiple == number2multiple;
            if (number1multiple == number2multiple)
            {
                cout << "The LCM of number1 " << number1 << " and number2 " << number2 << " is : " << number1multiple << endl;
                break;
            }
        }
        if (ans)
        {
            break;
        }
    }
    // bool ans = number1==number2;

    // cout<<ans<<endl;
}