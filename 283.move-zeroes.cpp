/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

 #include <iostream> 
 #include <vector> 
 
 using namespace std; 


// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int writePos = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[writePos] = nums[i];
            writePos++;
        }
    }

    while (writePos < nums.size()) {
            nums[writePos] = 0;
            writePos++;
        }
    }
    
};
// @lc code=end

