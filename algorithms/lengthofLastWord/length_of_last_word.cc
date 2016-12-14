// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Dec 14 17:59:12 2016
// Source: https://leetcode.com/problems/length-of-last-word/

// Given a string s consists of upper/lower-case alphabets and empty space
// characters ' ', return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space
// characters only.

// For example,
// Given s = "Hello World",
// return 5.

class Solution {
 public:
  int lengthOfLastWord(string s) {
    if (all_of(s.begin(), s.end(), [](char c){return c == ' ';})) {
      return 0;
    }
    istringstream istring(s);
    while (istring >> s) {
      continue;
    }
    return s.size();
  }
};
