#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
       
        for (auto i:strs) {
            string curr = i;
            sort(curr.begin(), curr.end());
            mp[curr].push_back(i);
        }

        vector<vector<string>> res;

        for( auto i:mp){
            res.push_back(i.second);
        }
        
        return res;
    }
};
// @lc code=end