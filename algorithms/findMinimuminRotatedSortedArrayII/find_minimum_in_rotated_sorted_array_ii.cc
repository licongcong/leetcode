// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Sat Dec  3 09:33:29 2016
// Source: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

// Follow up for "Find Minimum in Rotated Sorted Array":
// What if duplicates are allowed?

// Would this affect the run-time complexity? How and why?
// Suppose a sorted array is rotated at some pivot unknown to you beforehand.

// (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

// Find the minimum element.

// The array may contain duplicates.

// Subscribe to see which companies asked this question

class Solution {
 public:
  int findMin(vector<int> nums) {
    if (nums.empty()) return 0;

    int low = 0;
    int high = nums.size() - 1;
    int mid;

    while (low < high) {
      if (nums[low] <= nums[high]) high--;
      else
        break;
    }
    if (high == 0) return nums[0];

    while (low < high-1) {
      mid = low + (high - low) / 2;
      if (nums[mid] <= nums[high]) high = mid;
      else
        low = mid;
    }

    return nums[high];
  }
};
