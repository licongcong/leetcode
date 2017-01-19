// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Jan 19 20:02:00 2017
// Source: https://leetcode.com/problems/first-unique-character-in-a-string/

// Given a string, find the first non-repeating character in it and return it's
// index. If it doesn't exist, return -1.

// Examples:

// s = "leetcode"
// return 0.

// s = "loveleetcode",
// return 2.
// Note: You may assume the string contain only lowercase letters.

class Solution {
 public:
  int firstUniqChar(string s) {
    int pos = -1;
    int times[26] = {0};
    for (int i=0; i < s.size(); ++i) {
      times[s[i]-'a']++;
    }
    for (int i=0; i < s.size(); ++i) {
      if (times[s[i]-'a'] == 1) {
        pos = i;
        break;
      }
    }
    return pos;
  }
};
