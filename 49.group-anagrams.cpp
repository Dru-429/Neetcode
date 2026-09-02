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

    for ( auto c : strs ){
        string s = c;
        sort(c.begin(), c.end()); 
        mp[c].push_back(s); 
    }
    vector<vector<string>> res; 
    for( auto it : mp ){
        res.push_back(it.second);
    }
    return res; 
    }
};
// @lc code=end

