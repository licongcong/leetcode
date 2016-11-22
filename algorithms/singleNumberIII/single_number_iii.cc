// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Tue Nov 22 18:24:50 2016
// Source: https://leetcode.com/problems/single-number-iii/

// Given an array of numbers nums, in which exactly two elements appear only
// once and all the other elements appear exactly twice.
// Find the two elements that appear only once.

// For example:

// Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].

// Note:
// The order of the result is not important. So in the above example, [5, 3] is
// also correct.
// Your algorithm should run in linear runtime complexity. Could you implement
// it using only constant space complexity?

// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

class Solution {
 public:
  vector<int> singleNumber(vector<int>& nums) {
    vector<int> result;
    int first = nums[0];
    int size = nums.size();
    for (int i=1; i < size; i++) {
      first ^= nums[i];
    }

    int mask = 1;
    for (int i=0; i < 32; i++) {
      if (mask&first) break;
      mask = mask << 1;
    }

    int num = first;
    int i = 0;
    while (i < size) {
      if (nums[i] & mask) {
        first ^= nums[i];
      }
      i++;
    }
    result.push_back(first);
    result.push_back(num^first);
    return result;
  }
};
