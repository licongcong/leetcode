// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Nov  9 23:07:53 2016
// Source : https://leetcode.com/problems/power-of-four/

// Given an integer (signed 32 bits), write a function to check whether
// it is a power of 4.
//
// Example:
// Given num = 16, return true.
// Given num = 5, return false.
//
// Follow up: Could you solve it without loops/recursion?
//
// Credits:Special thanks to @yukuairoy for adding this problem and
// creating all test cases.


class Solution {
 public:
  bool isPowerOfFour(int num) {
    // edge cases
    if (num <= 0) return false;

    bool ans = false;
    while (num) {
      if (num ==1) {
        ans = true;
        break;
      } else {
        // if the last two bits not all zero, there are multiple bites are 1.
        if (num&3) {
          break;
        } else {
          num = num >> 2;
        }
      }
    }
    return ans;
  }
};
