#include <bits/stdc++.h>
#include <iostream>
using namespace std;
double findSquareRoot(int number, int precision)
{
    int start = 0;
    int end = number;
    double root = 0.0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == number)
        {
            return mid;
        }
        else if (mid * mid < number)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    double increment = 0.1;
    for (int i = 0; i < precision; i++)
    {
        while (root * root <= number)
        {
            root += increment;
        }
        root -= increment;
        increment /= 10;
    }

    return root;
}
int main()
{
    int number, precision;
    cout << "Enter the number " << endl;
    cin >> number;
    cout << "Enter the precision " << endl;
    cin >> precision;
    ;

    double sqaureRoot = findSquareRoot(number, precision);
    cout << "The square root of given number is " << sqaureRoot;
    return 0;
}