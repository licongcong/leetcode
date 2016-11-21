// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Nov 21 11:47:36 2016
// Source: https://leetcode.com/problems/remove-element/

// Given an array and a value, remove all instances of that value in place and
// return the new length.

// Do not allocate extra space for another array, you must do this in place with
// constant memory.

// The order of elements can be changed. It doesn't matter what you leave beyond
// the new length.

// Example:
// Given input array nums = [3,2,2,3], val = 3

// Your function should return length = 2, with the first two elements of nums
// being 2.


class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    if (!nums.size()) return 0;

    int low = 0;
    int high = nums.size() - 1;
    int temp;
    while (low <= high) {
      if (nums[low] != val) {
        low++;
        continue;
      }

      if (nums[high] == val) {
        high--;
        continue;
      }

      if ((nums[low] == val) && (nums[high] != val)) {
        temp = nums[low];
        nums[low] = nums[high];
        nums[high] = temp;
        low++;
        high--;
      }
    }
    return low;
  }
};
