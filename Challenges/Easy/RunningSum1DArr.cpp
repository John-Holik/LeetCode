/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

My Solution:  */

#include <vector>

using namespace std;

class Solution{
public:
    vector<int> runningSum(vector<int> &nums){
        int len = nums.size();
        vector<int> sum(len, 0);
        for (int i = 0; i < len; i++){
            for (int j = 0; j <= i; j++){
                sum[i] += nums[j];
            }
        }
        return sum;
    }
};