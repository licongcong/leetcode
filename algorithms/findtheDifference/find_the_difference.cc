// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Jan 18 21:58:19 2017
// Source: https://leetcode.com/problems/find-the-difference/

// Given two strings s and t which consist of only lowercase letters.

// String t is generated by random shuffling string s and then add one more
// letter at a random position.

// Find the letter that was added in t.

// Example:

// Input:
// s = "abcd"
// t = "abcde"

// Output:
// e

// Explanation:
// 'e' is the letter that was added.

class Solution {
 public:
  char findTheDifference(string s, string t) {
    int total = 0;
    for (int i=0; i < t.size(); ++i) {
      total += t[i];
    }
    for (int i=0; i < s.size(); ++i) {
      total -= s[i];
    }
    return total;
  }
};