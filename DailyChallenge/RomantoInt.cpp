/*Daily Challenge 10/1/24 

Given a roman numeral, convert it to an integer.

My Solution:  */

#include <string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        int length = s.length();

        for (int i = 0; i < length; i++)
        {
            // 1's
            if (s[i] == 'I')
            {
                if (i + 1 < length && s[i + 1] == 'V')
                {
                    sum += 4;
                    i++; // Skip next character
                }
                else if (i + 1 < length && s[i + 1] == 'X')
                {
                    sum += 9;
                    i++; // Skip next character
                }
                else
                {
                    sum += 1;
                }
            }
            // 10's
            else if (s[i] == 'X')
            {
                if (i + 1 < length && s[i + 1] == 'L')
                {
                    sum += 40;
                    i++;
                }
                else if (i + 1 < length && s[i + 1] == 'C')
                {
                    sum += 90;
                    i++;
                }
                else
                {
                    sum += 10;
                }
            }
            // 100's
            else if (s[i] == 'C')
            {
                if (i + 1 < length && s[i + 1] == 'D')
                {
                    sum += 400;
                    i++;
                }
                else if (i + 1 < length && s[i + 1] == 'M')
                {
                    sum += 900;
                    i++;
                }
                else
                {
                    sum += 100;
                }
            }
            // 5, 50, 500, 1000
            else if (s[i] == 'V')
            {
                sum += 5;
            }
            else if (s[i] == 'L')
            {
                sum += 50;
            }
            else if (s[i] == 'D')
            {
                sum += 500;
            }
            else if (s[i] == 'M')
            {
                sum += 1000;
            }
        }
        return sum;
    }
};
