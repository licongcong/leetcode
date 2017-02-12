// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Feb 12 21:57:05 2017
// Source: https://leetcode.com/problems/word-pattern/

// Given a pattern and a string str, find if str follows the same pattern.

// Here follow means a full match, such that there is a bijection between a
// letter in pattern and a non-empty word in str.

// Examples:
// pattern = "abba", str = "dog cat cat dog" should return true.
// pattern = "abba", str = "dog cat cat fish" should return false.
// pattern = "aaaa", str = "dog cat cat dog" should return false.
// pattern = "abba", str = "dog dog dog dog" should return false.
// Notes:
// You may assume pattern contains only lowercase letters, and str contains
// lowercase letters separated by a single space.

// Credits:
// Special thanks to @minglotus6 for adding this problem and creating all test
// cases.

class Solution {
 public:
  bool wordPattern(string pattern, string str) {
    istringstream istring(str);
    string s;
    vector<string> strs;
    while (istring >> s) strs.push_back(s);
        
    if (strs.size() != pattern.size()) return false;
        
    unordered_map<char, string> c2s;
    unordered_map<string, char> s2c;
    for (int i=0; i < pattern.size(); i++) {
      if (c2s[pattern[i]] == "" && s2c[strs[i]] == 0) {
        c2s[pattern[i]] = strs[i];
        s2c[strs[i]] = pattern[i];
        continue;
      }
            
      if (s2c[strs[i]] != pattern[i]) return false;
    }
        
    return true;
  }
};

