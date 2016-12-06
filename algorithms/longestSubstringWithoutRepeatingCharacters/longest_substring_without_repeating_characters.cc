// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Tue Dec  6 22:51:46 2016
// Source: https://leetcode.com/problems/longest-substring-without-repeating-characters/

// Given a string, find the length of the longest substring without repeating
// characters.

// Examples:

// Given "abcabcbb", the answer is "abc", which the length is 3.

// Given "bbbbb", the answer is "b", with the length of 1.

// Given "pwwkew", the answer is "wke", with the length of 3.
// Note that the answer must be a substring, "pwke" is a subsequence and
// not a substring.

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int size = s.size();
    if (!size) return 0;
    if (size == 1) return 1;
            
    int max = 1;
    int curr_max = 1;
    int past;
    unordered_map<char, int> simple;
    simple[s[0]] = 0;
    for (int i=1; i < size; i++) {
      past = curr_max;
      if (simple.find(s[i]) != simple.end()) {
        curr_max = i - simple[s[i]];
        if (curr_max > past) {
          curr_max = past+1;
        } 
      } else {
        curr_max++;
      }
      max = curr_max > max ? curr_max : max;
      simple[s[i]] = i;
    }
    return max;
  }
};
