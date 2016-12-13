// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Dec  1 09:03:51 2016
// Source: https://leetcode.com/problems/contains-duplicate-ii/

// Given an array of integers and an integer k, find out whether there are two
// distinct indices i and j in the array such that nums[i] = nums[j] and the
// difference between i and j is at most k.

class Solution {
 public:
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> simple;
    for (int i=0; i < nums.size(); i++) {
      if (simple.find(nums[i]) != simple.end()) {
        if (i - simple[nums[i]] <= k) {
          return true;
        } else {
          simple[nums[i]] = i;
        }
      } else {
        simple[nums[i]] = i;
      }
    }
    return false;
  }
};
