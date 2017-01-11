// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Jan 11 17:05:37 2017
// Source: https://leetcode.com/problems/valid-anagram/

// Given two strings s and t, write a function to determine if t is an anagram
// of s.

// For example,
// s = "anagram", t = "nagaram", return true.
// s = "rat", t = "car", return false.

// Note:
// You may assume the string contains only lowercase alphabets.

// Follow up:
// What if the inputs contain unicode characters?
// How would you adapt your solution to such case?

class Solution {
 public:
  bool isAnagram(string s, string t) {
    vector<int> character(26, 0);

    for (char c: s) {
      character[c-'a']++;
    }
        
    for (char c: t) {
      character[c-'a']--;
    }
        
    // if (all_of(character.begin(), character.end(), [](int x){return x == 0;})) {
    //   return true;
    // } else {
    //   return false;
    // }
    for (int num : character) {
      if (num) return false;
    }
    return true;
  }
};

