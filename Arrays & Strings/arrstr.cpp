#include <iostream>
#include <cstring>
using namespace std;
int main()
{ /*This code is a simple method how
 we can take string input including space*/
    int n;
    cin >> n;
    char str[n];
    cin.ignore(); /*We have to use .ignore function because cin will not reach next getline function*/
    cin.getline(str, n, '\n');
    cout << str;
    return 0;
}