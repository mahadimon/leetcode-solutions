/*
https://leetcode.com/problems/sort-colors/

Test Case-1:
[2,0,2,1,1,0]

*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> tmpNums;
        int redPos=0, whitePos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                tmpNums.insert(tmpNums.begin()+redPos, 0);
                redPos++;
            }else if(nums[i]==1){
                tmpNums.insert(tmpNums.begin()+redPos+whitePos, 1);
                whitePos++;
            }else{
                tmpNums.push_back(2);
            }
        }
        nums = tmpNums;
    }
};