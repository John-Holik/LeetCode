/*Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all 
the numbers strictly to the index's right.If the index is on the left edge of the array, then the left sum is 0 because there 
are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

My Solution:  */

#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int len = nums.size();

        for (int i = 0; i < len; i++)
        {
            int piv = i;
            int front = 0;
            int rear = len - 1;
            double sumL = 0;
            double sumR = 0;

            while (front != piv)
            {
                sumL += nums[front];
                front++;
            }
            while (rear != piv)
            {
                sumR += nums[rear];
                rear--;
            }
            if (sumL == sumR)
            {
                return piv;
            }
        }
        return -1;
    }
};