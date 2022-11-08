#include <iostream>
#include <string>
#include <vector>
// brute force is create a new matrix and store accordingly
// here we have a matrix and we first do its transpose and theen rotate each row to get it <- this is the optimal solution
//
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j <= i; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};