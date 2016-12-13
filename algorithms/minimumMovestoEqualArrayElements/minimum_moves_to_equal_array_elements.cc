// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Dec  7 20:47:52 2016
// Source: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

// Given a non-empty integer array of size n, find the minimum number of moves
// required to make all array elements equal, where a move is incrementing n - 1
// elements by 1.

// Example:

// Input:
// [1,2,3]

// Output:
// 3

// Explanation:
// Only three moves are needed (remember each move increments two elements):

// [1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]

class Solution {
 public:
  int minMoves(vector<int>& nums) {
    int result = 0;
    int min_num = *min_element(nums.begin(), nums.end());
    for (int num : nums) {
      result += num - min_num;
    }
    return result;
  }
};
