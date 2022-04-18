/*
https://leetcode.com/problems/3sum/

Test Case-1:
[-1,0,1,2,-1,-4]

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> retVecVect;
        if(nums.empty() || nums.size()<3)
            return retVecVect;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int leftPos=i+1, rightPos=nums.size()-1;
            while(leftPos<rightPos){
                int sum = nums[i] + nums[leftPos] + nums[rightPos];
                if(sum>0){
                    rightPos--;
                }else if(sum<0){
                    leftPos++;
                }else{
                    retVecVect.push_back({nums[i], nums[leftPos], nums[rightPos]});
                    while(leftPos<rightPos && nums[leftPos]==nums[leftPos+1])
                        leftPos++;
                    while(leftPos<rightPos && nums[rightPos]==nums[rightPos-1])
                        rightPos--;
                    leftPos++;rightPos--;
                }
            }
        }
        return retVecVect;
    }
};