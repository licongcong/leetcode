// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Nov 15 10:35:24 2016
// Source: https://leetcode.com/problems/sqrtx/

// Implement int sqrt(int x).
// Compute and return the square root of x.

class Solution {
 public:
  int mySqrt(int x) {
    int root = 1 << 16;

    while (pow(root, 2) >= x) {
      root = (x/root+root) >> 1;
      if (pow(root, 2) <= x) break;
    }
    return root;
  }
};
