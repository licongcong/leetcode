// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Dec  4 08:39:22 2016
// Source: https://leetcode.com/problems/pascals-triangle/

// Given numRows, generate the first numRows of Pascal's triangle.

// For example, given numRows = 5,
// Return

// [
//      [1],
//     [1,1],
//    [1,2,1],
//   [1,3,3,1],
//  [1,4,6,4,1]
// ]

class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<int> temp(1, 1);
    vector<vector<int> > result;
    if (!numRows) return result;

    result.push_back(temp);
    if (numRows < 0) return result;
    for (int i=1; i < numRows; i++) {
      for (int j=1; j < i; j++) {
        temp.push_back(result[i-1][j-1]+result[i-1][j]);
      }
      temp.push_back(1);
      result.push_back(temp);
      temp.resize(1);
    }
    return result;
  }
};
