#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect;
    int n;
    cout << "How many elements you want to add in array ?";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vect.push_back(i);
    }
    cout << "Elements are :";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << " " << vect[i];
    }

    return 0;
}