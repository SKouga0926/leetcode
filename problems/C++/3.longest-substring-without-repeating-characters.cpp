/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start

// 1文字ずつ進めて，その文字と前回までの文字じゃなければ進み，最大だった時格納

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int s_length = s.length();

        int count = 0;

        int max_count = 0;

        for (int i = 0; i < s_length; i++) {

            // 現在の文字でもない，かつ前回の文字でもない
            if (s[i] != s[i+1]) {

                for (int j = 0; j < i; j++) {

                    if (s[j] != s[i+1]) {
                        count++;   
                    }
                }
            }


            if (max_count < count) {
                max_count = count;
            }

            count = 0;
            
        }

    
        return max_count+1;
        
    }
};
// @lc code=end

