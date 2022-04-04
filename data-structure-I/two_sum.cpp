/*
https://leetcode.com/problems/two-sum/
Test Case-1:
[2,7,11,15]
9

Test Case-2:
[2,7,11,15]
18
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> retArr = {};
        int sum = 0;
        if(nums.size() > 1){
            for(int i =0; i < nums.size(); i++){
                for(int j =i+1; j<nums.size(); j++){
                    sum = nums[i] + nums[j];
                    if (sum==target){
                        retArr = {i, j};
                        break;
                    }
                }
                if(!retArr.empty())
                    break;
            }
        }
        return retArr;
        
    }
};