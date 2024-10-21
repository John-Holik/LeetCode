/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from 
magazine and false otherwise. Each letter in magazine can only be used once in ransomNote.

My Solution:  */

#include <string>
#include <unordered_map>

using namespace std;

class Solution{
public:
    bool canConstruct(string ransomNote, string magazine){
        unordered_map<char, int> count;
        int ransomLen = ransomNote.length();
        int magLength = magazine.length();

        for (int i = 0; i < magLength; i++){
            count[magazine[i]]++;
        }
        for (char ransom : ransomNote){
            if (count[ransom] > 0){
                count[ransom]--;
            }else{
                return false;
            }
        }
        return true;
    }
};