/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


My Solution:  */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int> &nums){
        unordered_map<int, int> count;
        int len = nums.size();

        for (int i = 0; i < len; i++){
            count[nums[i]]++;
        }

        for (int num : nums){
            if (count[num] > 1){
                return true;
            }
        }

        return false;
    }
};