/*Given an integer number n, return the difference between the product of its digits and the sum of its digits.

My Solution:  */

#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int subtractProductAndSum(int n){
        vector<int> num;

        while (n > 0){
            int digit = n % 10;
            num.push_back(digit);
            n /= 10;
        }
        reverse(num.begin(), num.end());

        int product = 1;
        int sum = 0;
        int len = num.size();

        for (int i = 0; i < len; i++){
            product *= num[i];
            sum += num[i];
        }
        return product - sum;
    }
};