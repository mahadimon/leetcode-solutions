/*
https://leetcode.com/problems/majority-element/

Test Case-1:
[1]

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int max = INT_MIN;
        sort(nums.begin(), nums.end());
        int count = 0, majority=0;
        for(int i=0;i<nums.size();i++){
            if(i+1 == nums.size()){
                if(nums[i]==nums[i-1]){
                    count++;
                }
            }else if(nums[i]==nums[i+1]){
                count++;
            }else{
                count=0;
            }
            if(count>max){
                max = count;
                majority = nums[i];
            }
        }
        return majority;
    }
};