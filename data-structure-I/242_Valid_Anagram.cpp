/*
https://leetcode.com/problems/valid-anagram/
Test Case-1:
"anagram"
"nagaram"

Test Case-2:
"a"
"ab"
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        for(int i=0;i<s.size();i++){
            size_t position = t.find(s[i]);
            if(position == -1){
                return false;
            }else{
                t.erase(position, 1);   
            }
        }
        return true;
    }
};