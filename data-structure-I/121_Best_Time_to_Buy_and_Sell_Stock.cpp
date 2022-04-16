/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

Test Case-1:
link:
https://leetcode.com/submissions/detail/671764994/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, diffValue=0;
        int buyPrice = INT_MAX;
        for (int i=0; i<prices.size(); i++){
            if(prices[i]<buyPrice){
                buyPrice = prices[i];
            }
            diffValue = prices[i] - buyPrice;
            if(maxProfit < diffValue){
                maxProfit = diffValue;
            }
        }
        return maxProfit;
    }
};
