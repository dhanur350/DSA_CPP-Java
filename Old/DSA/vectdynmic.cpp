#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> *vp = new vector<int>();
    for (int i = 0; i < 10; i++)
    { // Insert elements via loop
        vp->push_back(i + 100);
    } // Now to check if it's added via loop we use size() to see if it's added or not
    for (int i = 0; i < vp->size(); i++)
    {
        cout << " " << vp->at(i);
    }
    return 0;
}