/*Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

My Solution:  */

#include <vector>

using namespace std;

class Solution
{

public:
    bool hasDuplicate(vector<int> &nums)
    {
        size_t size = nums.size();
        if (size == 0)
        {
            return false;
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};