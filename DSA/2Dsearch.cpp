#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cin >> row >> column;
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }
    static int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
            cout << endl;
        }
    }
    cout << "No. of 1's " << count;
    return 0;
}