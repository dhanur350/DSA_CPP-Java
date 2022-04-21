#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> *vectp = new vector<int>();
    vector<int> vectp;
    for (int i = 0; i < 10; i++)
    {
        vectp.push_back(i);
    }
    vectp.push_back(100);
    vectp.push_back(1000);
    for (int i = 0; i < vectp.size(); i++)
    {
        cout << " " << vectp[i];
    }
    /*
    If we try to get access of vector which is not our allocated memory and which is not initialized by default the vector will print the 0 number

    One more method to check vector index is at() so at() will be the alternate of []array index.
    */
    cout << " " << vectp[15]; // it'll print error of segmentation fault core dumped
    cout << " " << vectp[13];
    cout << " " << vectp.at(10);
    cout << " " << vectp.at(11);
    return 0;
}