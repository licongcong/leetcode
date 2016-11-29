// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Tue Nov 29 09:36:44 2016
// Source: https://leetcode.com/problems/palindrome-number/

// Determine whether an integer is a palindrome. Do this without extra space.

class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;

    int temp = 0;
    int y = x;
    while (y) {
      temp = temp * 10 + y % 10;
      y /= 10;
    }
    return temp == x;
  }
};
