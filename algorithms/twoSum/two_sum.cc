// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Nov 19 11:05:53 2016
// Source: https://leetcode.com/problems/two-sum/

// Given an array of integers, return indices of the two numbers such that
// they add up to a specific target.

// You may assume that each input would have exactly one solution.

// Example:
// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

// UPDATE (2016/2/13):
// The return format had been changed to zero-based indices.
// Please read the above updated description carefully.

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    std::unordered_map<int, int> simple;
    for (int i = 0; i< nums.size(); i++) {
      if (simple.find(nums[i]) != simple.end()) {
        ans.push_back(simple[nums[i]]);
        ans.push_back(i);
        return ans;
      } else {
        simple[target-nums[i]] = i;
      }
    }
    return ans;
  }
};
