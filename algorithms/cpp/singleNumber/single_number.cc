// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Wed Nov 16 10:08:12 2016
// Source: https://leetcode.com/problems/single-number/

// Given an array of integers, every element appears twice except for one.
// Find that single one.

// Note:
// Your algorithm should have a linear runtime complexity.
// Could you implement it without using extra memory?

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    for(int i = 1; i < nums.size(); ++i) {
      // XOR
      // a^a^b = a^b^a = b
      nums[0] ^= nums[i];
    }
    return nums[0];
  }
};
