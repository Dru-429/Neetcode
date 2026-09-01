#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string prefix = "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        for (int i = 0; i < first.length(); i++)
        {
            if (first[i] != last[i])
            {
                return prefix;
            }
            prefix += first[i];
        }
        return prefix;
    }
};
// @lc code=end
