// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Feb 14 21:45:32 2017
// Source: https://leetcode.com/problems/base-7/

// Given an integer, return its base 7 string representation.

// Example 1:
// Input: 100
// Output: "202"
// Example 2:
// Input: -7
// Output: "-10"
// Note: The input will be in range of [-1e7, 1e7].

class Solution {
 public:
  string convertToBase7(int num) {
    string result;
        
    if (!num) return "0";
        
    bool flag = false;
    if (num > 0) {
      flag = true;
    } else {
      flag = false;
      num = -num;
    }
        
    while (num) {
      result += to_string(num%7);
      num /= 7;
    }
        
    reverse(result.begin(), result.end());
        
    if (!flag) return '-' + result;
    else return result;

  }
};
