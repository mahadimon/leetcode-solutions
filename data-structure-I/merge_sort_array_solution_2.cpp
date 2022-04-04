/*
https://leetcode.com/problems/merge-sorted-array/
Test Case-1::
[-1,0,0,0,3,0,0,0,0,0,0]
5
[-1,-1,0,0,1,2]
6

Test Case-2::
[1,2,3,0,0,0]
3
[4,5,6]
3

*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        for(; i<(m+n); i++){
            if(j>=nums2.size())
                break;
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                nums1.pop_back();
                j++;
            }
        }
        int tmpPos = m + j;
        while(j<n){
            nums1.insert(nums1.begin()+tmpPos,nums2[j]);
            nums1.pop_back();
            j++;tmpPos++;
        }
    }
};