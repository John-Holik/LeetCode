/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.


My Solution:  */

#include <vector>
#include <unordered_map>
#include <set>

using namespace std;
class Solution{
public:
    bool uniqueOccurrences(vector<int> &arr){
        unordered_map<int, int> counts;
        int len = arr.size();

        for (int i = 0; i < len; i++){
            counts[arr[i]]++;
        }
        set<int> uniqueNums;

        for (const auto &count : counts){
            auto result = uniqueNums.insert(count.second);
            if (!result.second){
                return false;
            }
        }
        return true;
    }
};