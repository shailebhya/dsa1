
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// brute force solution hai ki sort karro vector ko then check with the nextm = put it in a structure and check the struct
// optimal below

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= temp[1])
            {
                temp[1] = max(temp[1], intervals[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};