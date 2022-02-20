#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char inp[10];
    int len;
    cin.getline(inp, 10);
    cout << inp << endl;
    len = strlen(inp);
    cout << len << endl;
    return 0;
}