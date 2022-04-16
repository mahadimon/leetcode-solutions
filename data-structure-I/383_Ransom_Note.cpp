/*
https://leetcode.com/problems/ransom-note/
Test Case-1:
"bg"
"efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"

Test Case-2:
"aa"
"aab"
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size() < ransomNote.size())
            return false;
        for (int i=0;i<ransomNote.size(); i++){
            size_t pos = magazine.find(ransomNote[i]);
            if(pos == -1){
                return false;
            }else{
                magazine.erase(pos,1);
            }
        }
        return true;
    }
};