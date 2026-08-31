#include <bits/stdc++.h>
#include <iostream>
using namespace std;


/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        for (int i =1; i<sorted_nums.size(); i++){
            if( sorted_nums[i] == sorted_nums[i-1]){
                return true;
            }
        }

        return false;
    }
};
// @lc code=end

