// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Jan 30 22:29:43 2017
// Source: https://leetcode.com/problems/number-of-1-bits/

// Write a function that takes an unsigned integer and returns the number of ’1'
// bits it has (also known as the Hamming weight).

// For example, the 32-bit integer ’11' has binary representation
// 00000000000000000000000000001011, so the function should return 3.

// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.

class Solution {
 public:
  int hammingWeight(uint32_t n) {
    int total = 0;
    while (n) {
      if (n&1) ++total;
      n = n >> 1;
    }
    return total;
  }
};

