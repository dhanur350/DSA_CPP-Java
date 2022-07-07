#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "Array size :";
    cin >> n;
    char str[n];
    char str1[n];
    cout << "Enter something for `str` variable :";
    cin.ignore();              // We have to use otherwise compiler will not take input further.
    cin.getline(str, n, '\n'); // Using same method for taking inputs including space
    // Copy string from one variable to another
    for (int i = 0; i <= n; i++)
    {
        str1[i] = str[i];
    }
    cout << str1;
    return 0;
}