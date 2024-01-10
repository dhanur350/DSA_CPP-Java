#include <iostream>
#include <cstring>
using namespace std;
void printAllsuffix(char str[], int n)
{
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) /* every loop will decrease one num and print one char extra till loop terminates*/
    {
        for (int j = i; j <= n; j++)
        {
            cout << str[j];
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    printAllsuffix(str, n);
    return 0;
}