// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Dec 10 16:22:24 2016
// Source: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

// Given a non-empty integer array, find the minimum number of moves required to
// make all array elements equal, where a move is incrementing a selected
// element by 1 or decrementing a selected element by 1.

// You may assume the array's length is at most 10,000.

// Example:

// Input:
// [1,2,3]

// Output:
// 2

// Explanation:
// Only two moves are needed (remember each move increments or decrements one
// element):

// [1,2,3]  =>  [2,2,3]  =>  [2,2,2]

class Solution {
 public:
  int minMoves2(vector<int>& nums) {
    int median = nums.size()/2;
    // sort nums
    nth_element(nums.begin(), nums.begin()+median, nums.end());
    int result = 0;
    for (int i=0; i < median; i++) {
      result += abs(nums[size-i-1]-nums[i]);
    }
    return result;
  }
};
