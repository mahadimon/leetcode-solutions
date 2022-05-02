/*
https://leetcode.com/problems/pascals-triangle-ii/

Test Case-1:
33

*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> retVectVec;
        
        if(rowIndex == 0)
            return {1};
        
        if(rowIndex == 1)
            return {1,1};
        
        retVectVec.push_back({1});
        retVectVec.push_back({1,1});
        vector<int> emptyVect;
        for(int i=2;i<=rowIndex;i++){
            vector<int> retVect;
            retVect.push_back(1);
            int lastSize = retVectVec[i-1].size();
            for(int j=0;j<lastSize-1;j++){
                retVect.push_back(retVectVec[i-1][j]+retVectVec[i-1][j+1]);
            }
            retVect.push_back(1);
            if(rowIndex==i){
                return retVect;
            }
            retVectVec.push_back(retVect);
        }
        return emptyVect;
    }
};