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
            for (int j=0; j<nums.size(); j++) {
                if ( i != j && num_target[i] == nums[j]){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// @lc code=end

