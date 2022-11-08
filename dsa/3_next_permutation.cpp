#include <iostream>
#include <string>
#include <vector>
// right se aa jaha gira , right se fir aa gira wala se jo jyada hoga usko swap kar fir gira wala k baad se reverse karde poort
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            { 
                for (int j = nums.size() - 1; j > 0; j--)
                {
                    cout << "nums[j]=" << nums[j] << " "
                         << "nums[i-1]=" << nums[i - 1] << endl;
                    if (nums[j] > nums[i - 1])
                    {
                        int temp = nums[j];
                        nums[j] = nums[i - 1];
                        nums[i - 1] = temp;
                        reverse(nums.begin() + i, nums.begin() + nums.size());
                        return;
                    }
                }
            }
            if (i == 1)
            {
                reverse(nums.begin(), nums.begin() + nums.size());
                return;
            }
        }
    }
};
int main(){
    char a = 'a';
    string abc = "hello";
    Solution sol;
    vector<int>nums {1,2,3};
    sol.nextPermutation(nums);
    return 0;
}