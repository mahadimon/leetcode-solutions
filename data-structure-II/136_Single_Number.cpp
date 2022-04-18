/*
https://leetcode.com/problems/single-number/

Test Case-1:
[4,1,2,1,2]

*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int retInt = 0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();){
            if(i+1==nums.size()){
                retInt = nums[i];
                break;
            } 
            if(nums[i]==nums[i+1]){
                i +=2;
            }
            else{
                retInt = nums[i];
                break;
            }
        }
        return retInt;
    }
};