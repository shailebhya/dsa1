#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0;
        int current = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (current > prices[i])
                current = prices[i];
            max = max > prices[i] - current ? max : prices[i] - current;
        }
        return max;
    }
};