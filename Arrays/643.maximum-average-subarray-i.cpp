/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */
#include <iostream> 
#include <vector> 

using namespace std; 

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //finding out sum of current_window.
        int Max_sum = 0;

        for(int i = 0; i < k ; i++){
            Max_sum += nums[i];
        } 

        //finding out sum of next_window. 
        int window_sum = Max_sum;
        for(int i = k; i < nums.size(); i++){
            window_sum = window_sum + nums[i] - nums[i - k]; 
            Max_sum = max(Max_sum , window_sum);
        }

        return static_cast<double>(Max_sum) / k;
    }
};
// @lc code=end

