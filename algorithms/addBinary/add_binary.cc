// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Dec 19 20:20:39 2016
// Source: https://leetcode.com/problems/add-binary/

// Given two binary strings, return their sum (also a binary string).

// For example,
// a = "11"
// b = "1"
// Return "100".

class Solution {
 public:
  string addBinary(string a, string b) {
    string result;
    int carry = 0;
    int temp;
    int i = a.size()-1;
    int j = b.size()-1;
    while (i >= 0 && j >= 0) {
      temp = (a[i] - '0') + (b[j] - '0') + carry;
      if (temp >= 2) {
        result.insert(0, to_string(temp%2));
        carry = 1;
      } else {
        carry = 0;
        result.insert(0, to_string(temp));
      }
      i--;
      j--;
    }
    
    while (i >= 0) {
      temp = (a[i] - '0') + carry;
      if (temp >= 2) {
        result.insert(0, to_string(temp%2));
        carry = 1;
      } else {
        result.insert(0, to_string(temp));
        carry = 0;
      }
      i--;
    }
    
    while (j >= 0) {
      temp = (b[j] - '0') + carry;
      if (temp >= 2) {
        result.insert(0, to_string(temp%2));
        carry = 1;
      } else {
        result.insert(0, to_string(temp));
        carry = 0;
      }
      j--;
    }
    if (carry) result.insert(0, "1");
    if (result.size() > 1 && result[0] == '0')
      result.erase(result.begin(), result.begin()+1);
    return result;
  }
};
