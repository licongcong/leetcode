// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Dec 13 15:32:47 2016
// Source: https://leetcode.com/problems/add-strings/

// Given two non-negative numbers num1 and num2 represented as string, return
// the sum of num1 and num2.

// Note:

// The length of both num1 and num2 is < 5100.
// Both num1 and num2 contains only digits 0-9.
// Both num1 and num2 does not contain any leading zero.
// You must not use any built-in BigInteger library or convert the inputs to
// integer directly.

class Solution {
 public:
  string addStrings(string num1, string num2) {
    string result = "";
    int carry = 0;
    int temp;
    int num_1;
    int num_2;
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    while (i >=0 && j >=0) {
      num_1 = num1[i] - '0';
      num_2 = num2[j] - '0';
      if (carry) {
        num_1 += carry;
        carry = 0;
      }
      temp = num_1 + num_2;
      if (temp > 9) {
        result.insert(0, to_string(temp%10));
        carry = 1;
      } else {
        result.insert(0, to_string(temp));
      }
      i--;
      j--;
    }
        
    while (i >= 0) {
      num_1 = num1[i] - '0';
      if (carry) {
        num_1 += carry;
        carry = 0;
      }
      if (num_1 > 9) {
        carry = 1;
        result.insert(0, to_string(num_1%10));
      } else {
        result.insert(0, to_string(num_1));
      }
      i--;
    }
        
    while (j >= 0) {
      num_2 = num2[j] - '0';
      if (carry) {
        num_2 += 1;
        carry = 0;
      }
            
      if (num_2 > 9) {
        carry = 1;
        result.insert(0, to_string(num_2%10));
      } else {
        result.insert(0, to_string(num_2));
      }
      j--;
    }
        
    if (carry) result.insert(0, to_string(1));
    return result;
  }
};
