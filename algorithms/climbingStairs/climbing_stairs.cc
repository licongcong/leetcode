// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Dec 22 20:52:40 2016
// Source: https://leetcode.com/problems/climbing-stairs/

// You are climbing a stair case. It takes n steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can
// you climb to the top?

class Solution {
 public:
  int climbStairs(int n) {
    if (n <= 1) return 1;

    int temp1 = 1;
    int temp2 = 1;
    int result = 0;
    int i = 2;
    while (i <= n) {
      result = temp1 + temp2;
      temp1 = temp2;
      temp2 = result;
      i++;
    }
    return result;
  }
};
