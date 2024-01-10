#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void triplet(int a[], int size, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (a[i] + a[j] + a[k] == s)
                {
                    vector<int> temp;
                    temp.push_back(a[i]);
                    temp.push_back(a[j]);
                    temp.push_back(a[k]);
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (vector<int> vec1 : ans)
    {
        for (int z : vec1)
        {
            cout << z << " ";
        }
        cout << endl;
    }
}

int main()
{
    int size = 5;
    int s = 12;
    int a[5] = {10, 5, 5, 5, 2};
    triplet(a, size, s);
    return 0;
}