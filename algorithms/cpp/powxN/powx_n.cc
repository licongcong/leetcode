// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Wed Nov 16 09:20:06 2016
// Source: https://leetcode.com/problems/powx-n/

// Implement pow(x, n).

class Solution {
 public:
  double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;

    bool flag = n < 0 ? true : false;
    if (flag) {
      unsigned int exp = -n;
      double temp = myPow(x, exp/2);
      temp = temp * temp * myPow(x, exp%2);
      return 1/temp;
    } else {
      double temp = myPow(x, n/2);
      return temp * temp * myPow(x, n%2);
    }
  }
};
