// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Nov 20 10:19:56 2016
// Source: https://leetcode.com/problems/reverse-integer/

// Reverse digits of an integer.

// Example1: x = 123, return 321
// Example2: x = -123, return -321

class Solution {
 public:
  int reverse(int x) {
    // takes care of overflow
    long long ans = 0LL;
    while (x) {
      ans = ans*10 + x%10;
      x /= 10;
    }
    return (ans > INT_MAX || ans < INT_MIN) ? 0 : ans;
  }
};
