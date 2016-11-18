// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Thu Nov 17 17:47:13 2016
// Source: https://leetcode.com/problems/search-for-a-range/

// Given a sorted array of integers, find the starting and ending position
// of a given target value.

// Your algorithm's runtime complexity must be in the order of O(log n).

// If the target is not found in the array, return [-1, -1].

// For example,
// Given [5, 7, 7, 8, 8, 10] and target value 8,
// return [3, 4].

class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;

    int low = 0;
    int high = nums.size()-1;
    int mid;
    // find begin
    while (low < high) {
      mid = low + ((high - low) >> 1);
      if (nums[mid] < target) {
        low = mid + 1;
      } else {
        high = mid;
      }
    }

    if (nums[high] == target) {
      ans.push_back(high);

      // find end
      low = high;
      high = nums.size()-1;
      while (low+1 < high) {
        if (nums[mid] > target) {
          high = mid - 1;
        } else {
          low = mid;
        }
      }

      if (nums[high] > target) {
        high = low;
      }
      ans.push_back(high);
    } else {
      // target doesn't exist
      ans.push_back(-1);
      ans.push_back(-1);
    }

    return ans;
  }
};
