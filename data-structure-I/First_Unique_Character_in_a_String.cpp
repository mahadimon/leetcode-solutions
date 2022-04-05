/*
https://leetcode.com/problems/first-unique-character-in-a-string/
Test Case-1:
"aadadaad"

Test Case-2:
"abdbdbbd"
*/

class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i< s.size(); i++){
            bool notUnique = false;
            for(int j=0;j<s.size();j++){
                if(i!=j && s[i]==s[j]){
                    notUnique = true;
                    break;
                }
            }
            if(!notUnique)
                return i;
        }
        return -1;
    }
};