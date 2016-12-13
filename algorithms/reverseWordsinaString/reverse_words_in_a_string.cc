// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Nov 22 14:16:04 2016
// Source: https://leetcode.com/problems/reverse-words-in-a-string/

// Given an input string, reverse the string word by word.

// For example,
// Given s = "the sky is blue",
// return "blue is sky the".

// Update (2015-02-12):
// For C programmers: Try to solve it in-place in O(1) space.

class Solution {
 public:
  void reverseWords(string &s) {
    // edge case
    if (all_of(s.begin(), s.end(), [](char c){return c == ' ';})) {
      s = "";
      return;
    }

    istringstream istring(s);
    istring >> s;
    string temp;
    while (istring >> temp) {
      s = temp + ' ' + s;
    }
    return;
  }
};
