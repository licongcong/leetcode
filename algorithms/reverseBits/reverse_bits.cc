// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Jan 31 21:40:05 2017
// Source: https://leetcode.com/problems/reverse-bits/

// Reverse bits of a given 32 bits unsigned integer.

// For example, given input 43261596 (represented in binary as
// 00000010100101000001111010011100), return 964176192 (represented in binary as
// 00111001011110000010100101000000).

// Follow up:
// If this function is called many times, how would you optimize it?

// Related problem: Reverse Integer

// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.

class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    if (n == 0) return 0;
        
    uint32_t ans = 0;
    uint32_t mask = 1;
    for (int i=0; i < 32; i++) {
      ans = ans << 1;
      if (mask & n) {
        ans = ans | mask;
      }
      n = n >> 1;
    }
    return ans;
  }
};
