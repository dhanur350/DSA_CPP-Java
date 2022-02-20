#include <iostream>
using namespace std;
int main()
{
    char a[10];
    cin.getline(a, 10, '\n');
    // getline  |    |   |
    /**        |    |    |  Delimiter
     *      1st    2nd  3rd Parameter
     *   Parameter Parameter
     */
    cout << a;
    /*cin >> a;
    cout << a[0] << a[1] << a[2] << a[3];*/
    return 0;
}