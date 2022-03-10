#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "How many rows and columns ?";
    cin >> rows >> columns;
    cout << "Enter your rows and columns data ->" << endl;
    int twodim[rows][columns];
    // Input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter row " << i << " column " << j << " :";
            cin >> twodim[i][j];
            cout << endl;
        }
    }
    // column Wise PRINT
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "|" << twodim[j][i] << "|";
        } //                       |--|->Swap positions of (i) with (j)
        cout << endl;
    }
    return 0;
}