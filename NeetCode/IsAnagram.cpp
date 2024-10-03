/*Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

My Solution:  */

#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> count;
        int lengthS = s.length();
        int lengthT = t.length();
        if (lengthS != lengthT)
        {
            return false;
        }

        for (int i = 0; i < lengthS; i++)
        {
            count[s[i]]++;
        }

        for (char st : t)
        {
            if (count[st] > 0)
            {
                count[st]--;
            }
            else if (count[st] == 0)
            {
                return false;
            }
        }
        return true;
    }
};