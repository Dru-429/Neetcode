#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for(int i =0; i< nums.size(); i++) {
            if (nums[i] == val){
                nums[i] = -1;
            }
        }

        return remove(nums.begin(), nums.end(), -1) - nums.begin();
    }
};
// @lc code=end

