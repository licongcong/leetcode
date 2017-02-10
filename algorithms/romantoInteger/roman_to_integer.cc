// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Feb 10 23:43:29 2017
// https://leetcode.com/problems/roman-to-integer/

// Given a roman numeral, convert it to an integer.

// Input is guaranteed to be within the range from 1 to 3999.

class Solution {
 public:
  unordered_map<char, int> kBasic = { { 'I' , 1 },
                                      { 'V' , 5 },
                                      { 'X' , 10 },
                                      { 'L' , 50 },
                                      { 'C' , 100 },
                                      { 'D' , 500 },
                                      { 'M' , 1000 } };
    
  int romanToInt(string s) {
    int result = kBasic[s.back()];
       
    for (int i = s.length() - 2; i >= 0; --i) {
      if (kBasic[s[i]] < kBasic[s[i + 1]]) {
        result -= kBasic[s[i]];
      } else {
        result += kBasic[s[i]];
      }
    }
   
    return result;
  }
};
