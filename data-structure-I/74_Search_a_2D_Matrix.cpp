/*
https://leetcode.com/problems/search-a-2d-matrix/
Test Case-1:
[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
3

Test Case-2:
[[1]]
1
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i< matrix.size(); i++){
            int endPos = matrix[i].size();
            if (target == matrix[i][endPos-1])
                return true;
            if (target > matrix[i][endPos-1])
                continue;
            if(target < matrix[i][endPos-1]){
                for(int j=0; j<endPos;j++){
                    if(matrix[i][j]==target)
                        return true;
                }
            }
        }
        return false;
    }
};