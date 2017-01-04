// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Jan  4 10:16:30 2017
// Source: https://leetcode.com/problems/gray-code/

// The gray code is a binary numeral system where two successive values differ
// in only one bit.

// Given a non-negative integer n representing the total number of bits in the
// code, print the sequence of gray code.
// A gray code sequence must begin with 0.

// For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:

// 00 - 0
// 01 - 1
// 11 - 3
// 10 - 2
// Note:
// For a given n, a gray code sequence is not uniquely defined.

// For example, [0,2,3,1] is also a valid gray code sequence according to the
// above definition.

// For now, the judge is able to judge based on one instance of gray code
// sequence. Sorry about that.

class Solution {
 public:
  vector<int> grayCode(int n) {
    vector<int> result(1, 0);
    if (!n) return result;
    result.push_back(1);
    
    int i = 1;
    int diff = 0;
    while (i < n) {
      i++;
      diff = pow(2, i) - pow(2, i-1);
      diff = max(2, diff);
   
      for (int i=0; i < diff; i++) {
        result.push_back(result[i]+diff);
      }
      reverse(result.begin()+diff, result.end());
    }
    return result;
  }
};
