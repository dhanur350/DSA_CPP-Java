// LeetCode Question to solve spiral matrix problem
#include <iostream>
#include <vector>
using namespace std;
class spiral
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) // o(m*n)
    {
        vector<int> ans;
        int row = matrix.size();
        if (row == 0)
        {
            return ans;
        }
        int column = matrix[0].size();
        if (column == 0)
        {
            return ans;
        }
        int startRow = 0, endRow = row - 1, startColumn = 0, endColumn = column - 1;
        int count = 0;
        while (startRow <= endRow && startColumn <= endColumn)
        {
            // 1st Spiral
            for (int i = startColumn; i <= endColumn; i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            if (count == row * column)
            {
                return ans;
            }
            // 2nd Spiral
            for (int i = startRow; i <= endRow; i++)
            {
                ans.push_back(matrix[i][endColumn]);
                count++;
            }
            endColumn--;
            if (count == row * column)
            {
                return ans;
            }
            // 3rd Spiral
            for (int i = endColumn; i >= startColumn; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            if (count == row * column)
            {
                return ans;
            }
            // 4th Spiral
            for (int i = endRow; i >= startRow; i--)
            {
                ans.push_back(matrix[i][startColumn]);
                count++;
            }
            startColumn++;
            if (count == row * column)
            {
                return ans;
            }
        }
    }
};
