// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Jan 14 20:34:09 2017
// Source: https://leetcode.com/problems/number-complement/

// Given a positive integer, output its complement number. The complement
// strategy is to flip the bits of its binary representation.

// Note:
// The given integer is guaranteed to fit within the range of a 32-bit signed
// integer.
// You could assume no leading zero bit in the integer’s binary representation.
// Example 1:
// Input: 5
// Output: 2
// Explanation: The binary representation of 5 is 101 (no leading zero bits),
// and its complement is 010. So you need to output 2.

// Example 2:
// Input: 1
// Output: 0
// Explanation: The binary representation of 1 is 1 (no leading zero bits),
// and its complement is 0. So you need to output 0.

class Solution {
 public:
  int findComplement(int num) {
    int mask = ~0;
    int result = num ^ mask;
        
    mask = 1;
    num = num >> 1;
    while (num) {
      mask = mask | (mask << 1);
      num = num >> 1;
    }

    return result & mask;
  }
};
