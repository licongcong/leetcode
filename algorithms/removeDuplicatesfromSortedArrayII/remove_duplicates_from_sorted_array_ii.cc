// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Sat Nov 26 09:48:24 2016
// Source: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

// Follow up for "Remove Duplicates":
// What if duplicates are allowed at most twice?

// For example,
// Given sorted array nums = [1,1,1,2,2,3],

// Your function should return length = 5, with the first five elements of nums
// being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new
// length.

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int size = nums.size();
    if (size < 3) return size;

    int i = 0;
    int j = 2;
    while (j < size) {
      if (nums[i] != nums[j]) {
        nums[i+2] = nums[j];
        i++;
      }
      j++;
    }
    return i+2;
  }
};
