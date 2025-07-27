/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include <vector> 
 
// @lc code=start
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if(prices.empty()) return 0; 

        int minPrices = prices.at(0);
        int maxProfit = 0; 

        for(int i = 1 ; i < prices.size() ; i++){
            if(prices.at(i) < minPrices){
                minPrices = prices.at(i);
            }else{
            int profit = prices.at(i) - minPrices;
                if(profit > maxProfit){
                    maxProfit = profit;
                }
            }
        }
        return maxProfit; 
    }

};
// @lc code=end
