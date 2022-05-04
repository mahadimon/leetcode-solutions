/*
https://leetcode.com/problems/increasing-triplet-subsequence/
must think the algorithm again

Test Case-1:
[20,100,10,12,5,13]
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int iMax = INT_MAX, jMax = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<iMax){
                iMax=nums[i];
            }else if(iMax<nums[i] && nums[i]<jMax){
                jMax=nums[i];
            }else if(jMax<nums[i]){
                return true;
            }
            
        }
        return false;
    }
};