// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Dec 12 22:45:23 2016
// Source: https://leetcode.com/problems/count-and-say/

// The count-and-say sequence is the sequence of integers beginning as follows:
// 1, 11, 21, 1211, 111221, ...

// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth sequence.

// Note: The sequence of integers will be represented as a string.

class Solution {
 public:
  string countAndSay(int n) {
    if (n < 0) return "";

    string result = "1";
    string temp = "";
    int count = 0;
    int times = 1;
    int i = 0;
    int j = 0;
    while (times < n) {
      i = 0;
      j = 0;
      count = 0;
      while (j < result.size()) {
        if (result[i] == result[j]) {
          j++;
          count++;
        } else {
          temp += to_string(count) + result[i];
          i = j;
          count = 0;
        }
      }
      temp += to_string(count) + result[i];
      result = temp;
      temp.clear();
      times++;
    }
    return result;
  }
};
