/*
https://leetcode.com/problems/merge-intervals/
failed to solve it 11th times, should try again few days later
Test Case-1:
[[1,4],[0,2],[3,5]]

Test Case-2:
[[1,4],[0,1]]

Test Case-3:
[[1,4],[0,0]]

Test Case-4:
[[1,4],[2,3]]

Test Case-5:
[[1,4],[0,1]]

Test Case-6:
[[1,4],[0,4]]

Test Case-7:
[[1,4],[1,4]]

Test Case-8:
[[1,4],[4,5]]

Test Case-9:
[[1,3],[2,6],[8,10],[15,18]]

Test Case-10:
[[2,3],[4,5],[6,7],[8,9],[1,10]]

Test Case-11:
[[2,3],[4,5],[6,7]]

Test Case-12:
[[15,18],[1,3],[1,6],[8,10]]
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> retVectVec;
        sort(intervals.begin(), intervals.end());
        if(intervals.size()>1){
            int front = intervals[0].front();
            int back = intervals[0].back();
            for(int i=1;i<intervals.size();i++){
                if(intervals[i].front()>back){
                    retVectVec.push_back({front, back});
                    front=intervals[i].front();
                    back=intervals[i].back();
                }else{
                    if(intervals[i].back()>back){
                        back = intervals[i].back();
                    }
                }
            }
            retVectVec.push_back({front, back});
        }else{
            retVectVec = intervals;
        }
        return retVectVec;
    }
};