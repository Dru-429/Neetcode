#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num_target(nums.size());

        for (int i =0; i<nums.size(); i++) {
            num_target[i] = target - nums[i];
        }

        for (int i=0; i<nums.size(); i++) {
            auto index = find(nums.begin(), nums.end(), num_target[i]);
            
            if(index != nums.end()) {
                int ind = index - nums.begin();
                if (ind != i) {
                    return {i, ind};
                }
            }
        
        }
        return {};
    }
};
// @lc code=end

