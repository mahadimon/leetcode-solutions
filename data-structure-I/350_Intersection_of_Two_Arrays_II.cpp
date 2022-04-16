/*
https://leetcode.com/problems/intersection-of-two-arrays-ii/

Test Case-1:
[1,2,2,1]
[2,2]
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int matchPosition = -1;
        vector<int> retVec;
        for (int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    matchPosition = j;
                    break;
                }
            }
            if(matchPosition >= 0){
                retVec.push_back(nums2[matchPosition]);
                nums2.erase(nums2.begin()+matchPosition);
                matchPosition = -1;
            }
        }
        return retVec;
    }
};