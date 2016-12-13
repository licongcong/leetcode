// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Dec 11 16:16:25 2016
// Source: https://leetcode.com/problems/integer-to-roman/

// Given an integer, convert it to a roman numeral.

// Input is guaranteed to be within the range from 1 to 3999.

class Solution {
 public:
  static const vector<string> kThousand;
  static const vector<string> kHundred;
  static const vector<string> kTen;
  static const vector<string> kOne;
  string intToRoman(int num) {
    string result;
    result += kThousand[num/1000];
    result += kHundred[(num%1000)/100];
    result += kTen[(num%100)/10];
    result += kOne[num%10];
    return result;
  }
};

const vector<string> Solution::kThousand = {"", "M", "MM", "MMM"};
const vector<string> Solution::kHundred = {"", "C", "CC", "CCC", "CD", "D",
                                           "DC", "DCC", "DCCC", "CM"};
const vector<string> Solution::kTen = {"", "X", "XX", "XXX", "XL", "L",
                                       "LX", "LXX", "LXXX", "XC"};
const vector<string> Solution::kOne = {"", "I", "II", "III", "IV", "V",
                                       "VI", "VII", "VIII", "IX"};
