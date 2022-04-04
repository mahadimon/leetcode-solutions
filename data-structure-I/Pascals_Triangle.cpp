/*
https://leetcode.com/problems/pascals-triangle/

Test Case-1:
5

Test Case-2:
30
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> retVect;
        for(int i=0;i<numRows;i++){
            vector<int> insertMe;
            if(i==0){
                insertMe.push_back(1);
                retVect.push_back(insertMe);
            }else{
                int upperLimit = retVect[i-1].size();
                for(int j=0;j<=upperLimit;j++){
                    if(j==0){
                        insertMe.push_back(1);
                    }else if(j==upperLimit){
                        insertMe.push_back(1);
                    }else{
                        insertMe.push_back((retVect[i-1])[j]+(retVect[i-1])[j-1]);
                    }
                }
                retVect.push_back(insertMe);
            }
        }
        return retVect;
    }
};