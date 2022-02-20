#include <iostream>
using namespace std;
int main()
{
    static int i, n, sum;
    cout << "\n\tHow many items you want to enter ?";
    cin >> n;
    int a[n];
    cout << "\n\tEnter " << n << " items";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "\n\tSum is " << sum;
}