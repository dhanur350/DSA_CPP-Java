#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; // 1234=a
    // int a[3][3]; 9 arr-> 5 - 4mem
    int n; //5
    cin >> n; 
    for (int i = 0; i < n; i++) //5
    {
        a.push_back(i); //0  1 2 3 4
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
    return 0;
}