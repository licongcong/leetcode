// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Nov 25 19:15:01 2016
// Source: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// Given a sorted array, remove the duplicates in place such that each element
// appear only once and return the new length.

// Do not allocate extra space for another array, you must do this in place with
// constant memory.

// For example,
// Given input array nums = [1,1,2],

// Your function should return length = 2, with the first two elements of nums
// being 1 and 2 respectively. It doesn't matter what you leave beyond the new
// length.

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int size = nums.size();
    if (!size) return 0;

    int i = 0;
    int j = 0;
    while (j < size) {
      if (nums[i] != nums[j]) {
        nums[i+1] = nums[j];
        i++;
      }
      j++;
    }
    return i+1;
  }
};
