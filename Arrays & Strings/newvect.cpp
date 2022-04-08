#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect;
    int number;
    int lim;
    cin >> lim;
    for (int i = 0; i < lim; i++)
    {
        cin >> number;
        vect.push_back(number);
    }
    vect.push_back(23);
    vect.push_back(24);
    vect.push_back(25);
    for (int i = 0; i < vect.size(); i++)
    {
        cout << " " << vect[i];
    }
    return 0;
}