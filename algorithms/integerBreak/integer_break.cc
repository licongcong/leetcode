// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Dec 29 10:49:47 2016
// Source: https://leetcode.com/problems/integer-break/

// Given a positive integer n, break it into the sum of at least two positive
// integers and maximize the product of those integers. Return the maximum
// product you can get.

// For example, given n = 2, return 1 (2 = 1 + 1); given n = 10,
// return 36 (10 = 3 + 3 + 4).

// Note: You may assume that n is not less than 2 and not larger than 58.

// Hint:

// There is a simple O(n) solution to this problem.
// You may check the breaking results of n ranging from 7 to 10 to discover the
// regularities.

// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

class Solution {
 public:
  int integerBreak(int n) {
    if (n == 2) return 1;
    else if (n == 3) return 2;
    else {
      int temp = n % 3;
      if (!temp) return pow(3, n/3);
      else if (temp == 1) return pow(3, n/3-1) * 4;
      else return pow(3, n/3) * 2;
    }
  }
};
