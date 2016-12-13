// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Nov 15 10:04:34 2016
// Source: https://leetcode.com/problems/valid-perfect-square/

// Given a positive integer num, write a function which returns True if num is a
// perfect square else False.

// Note: Do not use any built-in library function such as sqrt.

// Example 1:

// Input: 16
// Returns: True
// Example 2:

// Input: 14
// Returns: False
// Credits:
// Special thanks to @elmirap for adding this problem and creating all test
// cases.

class Solution {
 public:
  bool isPerfectSquare(int num) {
    // the square root of num is smaller than 2^16
    // since the biggest integer is 2^32-1
    int x = 1 << 16;
    // find the square root
    // (a+b)/2 >= sqrt(a*b) (with equality if and only if a = b)
    while (pow(x, 2) > num) {
      x = (num/x+x) >> 1;
      if (pow(x, 2) == num) return true;
    }
    return false;
  }
};
