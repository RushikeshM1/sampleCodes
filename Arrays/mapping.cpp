#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<char, int> mapp;

    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
    }

    map<char, int>::iterator it = mapp.begin();

    for (it; it != mapp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}