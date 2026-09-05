#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int curr: nums) {
            count[curr] = count[curr] + 1;
        }

        int maxCount = 0; 
        int maxKey = 0;
        for (auto i: count) {
            if (i.second > maxCount) {
                maxCount = i.second;
                maxKey = i.first;
            }
        }
        return maxKey;
    }
};
// @lc code=end

