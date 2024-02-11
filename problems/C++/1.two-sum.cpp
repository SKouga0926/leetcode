/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums_, int target_) {
        for (int i = 0; i < nums_.size(); i++) {
            for (int j = i + 1; j < nums_.size(); j++) {
                if ((nums_[i] + nums_[j]) == target_) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
// @lc code=end

