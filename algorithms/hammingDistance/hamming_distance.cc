// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Dec 20 16:43:41 2016
// Source: https://leetcode.com/problems/hamming-distance/

// The Hamming distance between two integers is the number of positions at which
// the corresponding bits are different.

// Given two integers x and y, calculate the Hamming distance.

// Note:
// 0 ≤ x, y < 231.

// Example:

// Input: x = 1, y = 4

// Output: 2

// Explanation:
// 1   (0 0 0 1)
// 4   (0 1 0 0)
//        ↑   ↑

// The above arrows point to positions where the corresponding bits are
// different.

class Solution {
 public:
  int hammingDistance(int x, int y) {
    int total = 0;
    int temp = x ^ y;
    int mask = 1;
    while (temp) {
      if (temp & mask) {
        total++;
      }
      temp = temp >> 1;
    }
    return total;
  }
};
