#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<vector<int>> anss(vector<int> &vec1)
{
    set<vector<int>> st;
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = i + 1; j < vec1.size(); j++)
        {

            for (int k = j + 1; k < vec1.size(); k++)
            {
                if (vec1[i] + vec1[j] + vec1[k] == 0)
                {
                    vector<int> temp = {vec1[i], vec1[j], vec1[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int element;

    vector<int> vec1;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec1.push_back(element);
    }

        return 0;
}