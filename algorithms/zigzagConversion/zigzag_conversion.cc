// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Sun Nov 27 09:51:57 2016
// Source: https://leetcode.com/problems/zigzag-conversion/

// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
// of rows like this: (you may want to display this pattern in a fixed font for
// better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"
// Write the code that will take a string and make this conversion given a
// number of rows:

// string convert(string text, int nRows);
// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

class Solution {
 public:
  string convert(string s, int numRows) {
    if (s.empty()) return s;
    if (numRows <= 1) return s;
    int size = s.size();
    if (size <= numRows) return s;

    string result = "";
    int step = 2 * numRows - 2;
    vector<string> temp(numRows, "");
    int position;
    for (int i=0; i < size; i++) {
      position = i % step;
      if (position < numRows) temp[position] += s[i];
      else
        temp[step-position] += s[i];
    }

    vector<string>::iterator iter;
    for (iter = temp.begin(); iter != temp.end(); ++iter) {
      result += *iter;
    }
    return result;
  }
};
