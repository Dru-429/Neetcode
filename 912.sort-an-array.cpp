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
            int minIndex = min_element(nums.begin() + i,  nums.end()) - nums.begin();
            if (minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }

        return nums;
    }
};
// @lc code=end

