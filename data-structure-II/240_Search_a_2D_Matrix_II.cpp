/*
https://leetcode.com/problems/search-a-2d-matrix-ii/
Not so faster, must re-think to make it optimize

Test Case-1:
[[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]
21

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int matLen = matrix.size();
        for(int i=0;i<matLen;i++){
            int innerMatLen = matrix[0].size();
            for(int j=0;j<innerMatLen;j++){
                if(target==matrix[i][j] || target==matrix[i][innerMatLen-1]){
                    return true;
                }
                if(target>matrix[i][j] && target<matrix[i][innerMatLen-1]){
                    int midElem = (j+innerMatLen)/2;
                    if(target<matrix[i][midElem]){
                        innerMatLen=midElem;
                    }else if(target>matrix[i][midElem]){
                        j=midElem;
                    }else if(target == matrix[i][midElem]){
                        return true;
                    }else{
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        return false;
    }
};