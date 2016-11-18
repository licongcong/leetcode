// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Nov 14 09:57:39 2016
// Source: https://leetcode.com/problems/search-insert-position/

// Given a sorted array and a target value,
// return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.

// You may assume no duplicates in the array.

// Here are few examples.
// [1,3,5,6], 5 → 2
// [1,3,5,6], 2 → 1
// [1,3,5,6], 7 → 4
// [1,3,5,6], 0 → 0

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    // binary search
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;
    while (low < high) {
      mid = (low+high) >> 1;
      if (nums[mid] < target) low = mid + 1;
      if (nums[mid] >= target) high = mid;
    }
    // edge case
    if (nums[nums.size()-1] < target) return nums.size();

    return high;
  }
};
