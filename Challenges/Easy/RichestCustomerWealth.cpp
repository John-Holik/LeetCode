/* You are given an m x n integer grid accounts where accounts[i][j] is the amount of 
money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

My Solution:  */

#include <vector>
using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int rows = accounts.size();
        int cols = accounts[0].size();
        int max = 0;

        for (int i = 0; i < rows; i++) // traverse through the rows
        {
            int temp = 0; // acts as a temp accumulator for each row
            for (int j = 0; j < cols; j++) // traverse through each col in a row
            {
                temp += accounts[i][j]; // accumulate the row value
            }
            if (temp > max) // check for larger values
            {
                max = temp;
            }
        }
        return max; // return largest value found
    }
};