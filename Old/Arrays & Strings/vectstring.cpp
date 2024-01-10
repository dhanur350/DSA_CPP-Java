#include <iostream>
#include <vector>
//#include <algorithm>
using namespace std;
int main()
{
    vector<string> str;
    str.push_back("This is 1st string");
    str.push_back("This is 2nd string");
    /* Push back function will add a string in an given 2D string arrays collection
    Either we use 2D array and insert the string elements which will not be a good practice
    so we used *vector<datatype> variable;* */
    for (int i = 0; i < str.size(); i++) // loop forward
    {
        // sort(str[i].begin(), str[i].end());
        cout << str[i] << endl;
    }
    for (int i = str.size() - 1; i >= 0; i--) // loop backward
    {
        cout << str[i] << endl;
    }
    string str_;
    getline(cin, str_);
    cout << str_ << endl;
    return 0;
}