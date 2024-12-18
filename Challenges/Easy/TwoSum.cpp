/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

My Solution:  */

#include <vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        int length = nums.size();
        int sum = 0;
        for (int i = 0; i < length; i++){
            for (int j = i + 1; j < length; j++){
                sum = nums[i] + nums[j];
                if (sum == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};