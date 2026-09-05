#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i< size; i++) {
            for (int j = i +1; j<size; j++) {
                if (nums[i]> nums[j]) {
                    swap(nums[i], nums[j]);
                }
            }
        }

        return nums;
    }
};
// @lc code=end

