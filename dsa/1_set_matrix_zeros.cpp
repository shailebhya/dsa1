
// https://leetcode.com/problems/set-matrix-zeroes/
// Question : Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//! brute force
/*
traverse kariye m*n fir saare non zero elements ko -1 kardo in the particular row
*/
//! slightly optimised o(n*m)
/*
1. take 2 arrays dummy and put the coordinates in them of 0
2. traverse and check the dummy and change the variable to 0 acordingle
*/

//! optimised
/* taking reference of the first row and column as dummy. as the [0][0] element is common. we have to take a var for it.
1. traverse through .starting i=0 and j=1 as the first element of i .(ie j=0) is decided by col0
2. traverse in reverse in order to not disturb dummy . and put 0 where ver the reference row and column is 0 for the particular element
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int col0 = matrix[0][0];

        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][0] == 0)
            {
                col0 = 0;
            }
            for (int j = 1; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if (col0 == 0)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> a;
    a = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    sol.setZeroes(a);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}