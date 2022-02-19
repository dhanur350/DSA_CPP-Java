#include <vector>
#include <iostream>
using namespace std;
int main()
{
    // Declaration Syntax of Vector
    vector<int> vect;
    // Input range
    int n, temp[n];
    cout << "Array size?";
    cin >> n;
    // Adding numbers method using vector
    for (int i = 0; i < n; i++)
    {
        vect.push_back(i);
    }

    // Display method whatever it was entered
    for (int i = 0; i < vect.size(); i++)
    {
        cout << " " << vect[i];
    }

    return 0;
}