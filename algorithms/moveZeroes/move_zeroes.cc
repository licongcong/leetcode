// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Jan 24 22:07:22 2017
// Source: https://leetcode.com/problems/move-zeroes/

// Given an array nums, write a function to move all 0's to the end of it while
// maintaining the relative order of the non-zero elements.

// For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums
// should be [1, 3, 12, 0, 0].

// Note:
// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.
// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    // zero not in nums
    int zero_pos = INT_MAX;
        
    int not_zero_pos = 0;
    for (int i=0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        if (i > zero_pos) {
          continue; 
        } else {
          zero_pos = i;
        }
      } else {
        not_zero_pos = i;
      }
            
      if (zero_pos < not_zero_pos) {
        swap(nums[zero_pos], nums[not_zero_pos]);
        zero_pos++;
      }
    }
  }
};

