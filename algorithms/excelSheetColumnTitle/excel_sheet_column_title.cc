// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Dec 23 23:06:50 2016
// Source: https://leetcode.com/problems/excel-sheet-column-title/

// Given a positive integer, return its corresponding column title as appear in
// an Excel sheet.

// For example:

//     1 -> A
//     2 -> B
//     3 -> C
//     ...
//     26 -> Z
//     27 -> AA
//     28 -> AB
// Credits:
// Special thanks to @ifanchu for adding this problem and creating all test
// cases.

class Solution {
 public:
  string convertToTitle(int n) {
    string result = "";
    int temp = 0;
    while (n) {
      temp = n%26;
      if (!temp) {
        temp = 26;
        n--;
      }

      result += '@' + temp;
      n /= 26;
    }
    reverse(result.begin(), result.end());
    return result;
  }
};
