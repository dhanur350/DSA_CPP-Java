#include <iostream>
#include <cstring>
using namespace std;
bool mystrcmp(char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
        return false;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (strlen(str1) != strlen(str2))
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << " How much length of strings do u want to enter :";
    cin >> n;
    char str1[n], str2[n];
    cout << "Enter your 1st and 2nd strings " << endl;
    cin >> str1 >> str2;
    if (mystrcmp(str1, str2))
        cout << " Strings matched " << endl;
    else
        cout << " String is unmatched" << endl;
}
