/*You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string. Return the merged string.

My Solution:  */

#include <string>
using namespace std;

class Solution{
public:
    string mergeAlternately(string word1, string word2){
        int len1 = word1.length();
        int len2 = word2.length();

        string output;

        int i = 0;

        while (i < len1 + len2){
            if (i < len1){
                output.push_back(word1[i]);
            }
            if (i < len2){
                output.push_back(word2[i]);
            }
            i++;
        }
        return output;
    }
};