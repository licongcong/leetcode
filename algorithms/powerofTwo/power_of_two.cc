// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Jan 27 18:30:01 2017
// Source: https://leetcode.com/problems/power-of-two/

// Given an integer, write a function to determine if it is a power of two.

// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

class Solution {
 public:
  bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return !(n&(n-1));
  }
};

