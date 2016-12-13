// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Nov 13 22:56:33 2016
// Source: https://leetcode.com/problems/happy-number/

// Write an algorithm to determine if a number is "happy".

// A happy number is a number defined by the following process:
// Starting with any positive integer, replace the number by the sum of the
// squares of its digits, and repeat the process until the number
// equals 1 (where it will stay), or it loops endlessly in a cycle which does
// not include 1. Those numbers for which this process ends in 1 are
// happy numbers.

// Example: 19 is a happy number

// 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1
// Credits:
// Special thanks to @mithmatt and @ts for adding this problem and creating all
// test cases.

class Solution {
 public:
  bool isHappy(int n) {
    int temp = 0;
    while (true) {
      temp += pow(n%10, 2);
      n /= 10;
      if (!n) {
        n = temp;
        if (n < 10) break;
        temp = 0;
      }
    }
    // the happy number under 10 is only 1 and 7  
    return n == 1 || n == 7;
  }
};
