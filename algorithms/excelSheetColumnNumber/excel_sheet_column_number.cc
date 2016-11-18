// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Wed Nov  9 21:32:52 2016
// Source : https://oj.leetcode.com/problems/excel-sheet-column-number/

// Related to question Excel Sheet Column Title
// Given a column title as appear in an Excel sheet,
// return its corresponding column number.
//
// For example:
//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28
//
// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.
//

class Solution {
 public:
    int titleToNumber(string s) {
        int ans = 0;
        int size = s.length();
        for (int i=0; i < size; i++) {
          // Hexavigesimal
          ans += pow(26, size-i-1)*(s[i]-64);
        }
        return ans;
    }
};
