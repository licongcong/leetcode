// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Thu Dec  8 18:14:18 2016
// Source: https://leetcode.com/problems/string-to-integer-atoi/

// Implement atoi to convert a string to an integer.

// Hint: Carefully consider all possible input cases. If you want a challenge,
// please do not see below and ask yourself what are the possible input cases.

// Notes: It is intended for this problem to be specified vaguely (ie, no given
// input specs). You are responsible to gather all the input requirements up
// front.

// Update (2015-02-10):
// The signature of the C++ function had been updated. If you still see your
// function signature accepts a const char * argument, please click the reload
// button  to reset your code definition.

// spoilers alert... click to show requirements for atoi.

// Requirements for atoi:
// The function first discards as many whitespace characters as necessary until
// the first non-whitespace character is found. Then, starting from this
// character, takes an optional initial plus or minus sign followed by as many
// numerical digits as possible, and interprets them as a numerical value.

// The string can contain additional characters after those that form the
// integral number, which are ignored and have no effect on the behavior of
// this function.

// If the first sequence of non-whitespace characters in str is not a valid
// integral number, or if no such sequence exists because either str is empty or
// it contains only whitespace characters, no conversion is performed.

// If no valid conversion could be performed, a zero value is returned. If the
// correct value is out of the range of representable values,
// INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.

class Solution {
 public:
  int myAtoi(string str) {
    if (str.empty()) return 0;
    if (all_of(str.begin(), str.end(), [](char c){return c == ' ';})) return 0;

    int begin = 0;
    for (char c : str) {
      if (c == ' ') begin++;
      else
        break;
    }

    long result = 0;
    bool sign = true;

    if (str[begin] == '-') {
      sign = false;
      begin++;
    } else if (str[begin] == '+') {
      begin++;
    }

    for (int i=begin; i < str.size(); i++) {
      if (str[i] > '9' || str[i]< '0') break;
      if (result > INT_MAX) return sign ? INT_MAX : INT_MIN;
      result = result * 10 + (str[i] - '0');
    }
    
    if (result > INT_MAX) return sign ? INT_MAX : INT_MIN;
    return sign ? result : -1 * result;
  }
};
