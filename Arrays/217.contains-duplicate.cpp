/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std; 
// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map; 

        for(int i = 0; i < nums.size(); i++){

            if(map.find(nums[i]) != map.end()){
                return true; 
            }else{
                map[nums[i]] = i; 
            } 
        }
        return false; 
    }
};
// @lc code=end

