/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int max_len = 0;

        int left_ptr = 0;

        int s_length = s.length();

        unordered_set<char> char_set;

        for (int right_ptr = 0; right_ptr < s_length; right_ptr++) {

            if (char_set.count(s[right_ptr]) == 1) {

                while (true) {

                    if (char_set.count(s[right_ptr]) == 0) {
                        break;
                    }

                    char_set.erase(s[left_ptr]);

                    left_ptr++;
                }

                char_set.insert(s[right_ptr]);
            }

            if (char_set.count(s[right_ptr]) == 0) {

                max_len = max(max_len, right_ptr - left_ptr +  1);
                char_set.insert(s[right_ptr]);
            }

        }

        return max_len;
        
    }
};
// @lc code=end

