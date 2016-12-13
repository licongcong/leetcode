// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Nov 19 11:10:34 2016
// Source: https://leetcode.com/problems/majority-element/

// Given an array of size n, find the majority element. The majority element is
// the element that appears more than ⌊ n/2 ⌋ times.

// You may assume that the array is non-empty and the majority element always
// exist in the array.

// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int expect = nums[0];
    int count = 1;
    int size = nums.size();
    for (int i=1; i < size; i++) {
      if (count == 0) {
        expect = nums[i];
        ++count;
      } else if (expect == nums[i]) {
        ++count;
      } else {
        --count;
      }
    }
    return expect;
  }
};
