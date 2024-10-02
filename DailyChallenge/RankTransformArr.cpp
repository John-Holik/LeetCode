/* Daily Challenge 10/2/24

Given an array of integers arr, replace each element with its rank.
The rank represents how large the element is. The rank has the following rules:
Rank is an integer starting from 1.
The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
Rank should be as small as possible.

My Solution:  */


// This works for all test cases *EXCEPT* LARGE Arrays... 
// Technically it would work, it would just take longer than Leetcode allows :(
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> sortedArr = arr; // Copy array into to be sorted array

        size_t size = sortedArr.size(); // Get num of elements in array

        if (size == 0) // Test Case for empty array
            return {};

        vector<int> results(size, 0); // Create a new array to store sorted rankings results into

        sort(sortedArr.begin(), sortedArr.end()); // Sort Array

        int rank = 1; // Start with rank 1 

        for (int i = 0; i < size; i++)
        {
            if (i == 0 || sortedArr[i] != sortedArr[i - 1]) // If it is the first element or current element is not a duplicate
            {
                results[i] = rank;
                rank++;
            }
            else
            {
                results[i] = results[i - 1]; // if it is a duplicate, assign same rank
            }
        }

        // Sort ranking back into correct spots
        vector<int> ranks(size, 0); // Array to store correct ranking positions
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i] == sortedArr[j])
                {
                    ranks[i] = results[j];
                }
            }
        }
        return ranks;
    }
};


// To Complete the Challenge I had to learn how to use an unordered map:

#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        vector<int> sortedArr = arr;    // Copy array into to be sorted array
        size_t size = sortedArr.size(); // Get num of elements in array

        if (size == 0) // Test Case for empty array
            return {};

        sort(sortedArr.begin(), sortedArr.end()); // Sort Array

        unordered_map<int, int> ranksMap; // Init an unordered map

        int rank = 1; // Start with rank 1

        for (int i = 0; i < size; i++)
        {
            if (ranksMap.find(sortedArr[i]) == ranksMap.end()) // Searchs map for duplicates
            {
                ranksMap[sortedArr[i]] = rank;
                rank++;
            }
        }
        vector<int> ranks(size, 0);
        for (int i = 0; i < size; i++)
        {
            ranks[i] = ranksMap[arr[i]]; // Reassigns the ranks to the correct index
        }
        return ranks;
    }
};