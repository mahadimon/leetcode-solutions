/*
https://leetcode.com/problems/reshape-the-matrix/

Test Case-1:
[[1,2,3],[4,5,6]]
3
2

*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> retVector(r, vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c)
            return mat;
        int row=0; int col=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(col>=c){
                    row++;
                    col=0;
                }
                retVector[row][col] = mat[i][j];
                col++;
            }
        }
        return retVector;
    }
};