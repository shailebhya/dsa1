#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> r(numRows); // size bhi specify karna pdhta hai

        for (int i = 0; i < numRows; i++)
        {
            // resize karna pdhta hai nahi toh kaam ni karta yae
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1; // phla aur aakhiri subarray ko 1 bana raha hai

            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }

        return r;
    }
};