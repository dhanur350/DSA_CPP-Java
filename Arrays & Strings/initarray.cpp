#include <iostream>
using namespace std;

void returnFunction(int arr[][5], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << "\n";
    }
}
// By this code It is clear that only column dimension is important to declare and row dimension is not important
int main()
{
    int arr[][5] = {{2, 3}, {4, 5}}, rows, columns;
    cout << "How many rows and columns ?";
    cin >> rows >> columns;
    returnFunction(arr, rows, columns);
    return 0;
}
