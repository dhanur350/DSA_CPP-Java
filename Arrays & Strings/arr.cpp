#include <iostream>
using namespace std;
int main()
{ // Reverse an array in numbers
    int n;
    cout << "Array size ?";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}