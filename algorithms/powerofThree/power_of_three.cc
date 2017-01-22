// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Jan 22 21:32:11 2017
// Source: https://leetcode.com/problems/power-of-three/

// Given an integer, write a function to determine if it is a power of three.

// Follow up:
// Could you do it without using any loop / recursion?

// Credits:
// Special thanks to @dietpepsi for adding this problem and creating all test
// cases.

class Solution {
 public:
  bool isPowerOfThree(int n) {
    return fmod(log10(n)/log10(3), 1) == 0;
  }
};
