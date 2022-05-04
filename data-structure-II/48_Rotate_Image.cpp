/*
https://leetcode.com/problems/rotate-image/

Test Case-1:
[[1,2,3],[4,5,6],[7,8,9]]
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> tmpMatrix;
        int matrixSize = matrix.size();
        
        for(int i=0;i<matrixSize;i++){
            vector<int> tmpVect;
            for(int j=matrixSize-1;j>=0;j--){
                tmpVect.push_back(matrix[j][i]);
            }
            tmpMatrix.push_back(tmpVect);
        }
        matrix = tmpMatrix;
    }
};