// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Dec  1 08:48:17 2016
// Source: https://leetcode.com/problems/contains-duplicate/

// Given an array of integers, find if the array contains any duplicates.
// Your function should return true if any value appears at least twice in the
// array, and it should return false if every element is distinct.

class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> simple;
    for (int i=0; i < nums.size(); i++) {
      if (simple.find(nums[i]) != simple.end()) {
        return true;
      } else {
        simple[nums[i]] = i;
      }
    }
    return false;
  }
};
