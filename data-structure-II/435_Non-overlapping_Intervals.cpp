/*
https://leetcode.com/problems/non-overlapping-intervals/
understand the question first.

Test Case-1:
[[-52,31],[-73,-26],[82,97],[-65,-11],[-62,-49],[95,99],[58,95],[-31,49],[66,98],[-63,2],[30,47],[-40,-26]]
*/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count=0;
        int minVal = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(minVal>intervals[i][0]){
                ++count;
                //return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping, otherwise comment the below line
                minVal = min(minVal,intervals[i][1]);
            }else{
                minVal = intervals[i][1];
            }
        }
        return count;
    }
};