/*
https://leetcode.com/problems/spiral-matrix-ii/
study the algorithm again
 
Test Case-1:
20
*/


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> retVectVec(n, vector<int>(n));
        int layerCount = (n+1)/2;
        int count=0;
        for(int i=0;i<layerCount;i++){
            for(int j=i;j<(n-i);j++){
                retVectVec[i][j] = ++count;
            }
            for(int j=i+1;j<(n-i);j++){
                retVectVec[j][n-i-1] = ++count;
            }
            for(int j=(n-i-2);j>=i;j--){
                retVectVec[n-i-1][j] = ++count;
            }
            for(int j=(n-i-2);j>i;j--){
                retVectVec[j][i] = ++count;
            }
        }
        return retVectVec;
    }
};