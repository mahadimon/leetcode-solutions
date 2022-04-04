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
        int j=0;
        for(int i=m; i<(m+n); i++){
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(), nums1.end());
    }
};