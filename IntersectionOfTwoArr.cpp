/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear 
as many times as it shows in both arrays and you may return the result in any order.

My Solution:  */

#include <vector>
#include <unordered_map>

using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> count; // Create a map to hold the number as the key and the number of times it shows up as the value
        vector<int> result;

        for (int num : nums1)
        {
            count[num]++; // Add the number as the key and increment the number of times it shows up
        }

        for (int num : nums2)
        {
            if (count[num] > 0) // Check if num from nums2 arr is in map
            {
                result.push_back(num); // If so, add num to result arr
                count[num]--; // Decrement the number of times it is in map
            }
        }

        return result;
    } // End Intersect
};