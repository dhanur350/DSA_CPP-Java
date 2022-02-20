#include <iostream>
using namespace std;
// Code to find largest no. in array
int main()
{
    int n, i, largest = 0;
    cin >> n;
    int arr[n];
    cout << "Enter numbers ? ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << " " << largest;
    return 0;
}