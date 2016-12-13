// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Dec  4 09:00:27 2016
// Source: https://leetcode.com/problems/pascals-triangle-ii/

// Given an index k, return the kth row of the Pascal's triangle.

// For example, given k = 3,
// Return [1,3,3,1].

// Note:
// Could you optimize your algorithm to use only O(k) extra space?

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<int> result(1, 1);
    vector<int> temp(result);
    for (int i=1; i <= rowIndex; i++) {
      for (int j=1; j < i; j++) {
        temp.push_back(result[j-1]+result[j]);
      }
      temp.push_back(1);
      result = temp;
      temp.resize(1);
    }
    return result;
  }
};
