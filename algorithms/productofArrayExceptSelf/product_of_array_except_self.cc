// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Nov 23 21:31:49 2016
// Source: https://leetcode.com/problems/product-of-array-except-self/

// Given an array of n integers where n > 1, nums, return an array output such
// that output[i] is equal to the product of all the elements of nums except
// nums[i].

// Solve it without division and in O(n).

// For example, given [1,2,3,4], return [24,12,8,6].

// Follow up:
// Could you solve it with constant space complexity?
// (Note: The output array does not count as extra space for the purpose of
// space complexity analysis.)

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> result{1};
    // result[0] = 1
    // result[1] = 1 * nums[0]
    // result[2] = 1 * nums[0] * nums[1]
    // result[3] = 1 * nums[0] * nums[1] * nums[2];
    // ...
    for (int i=0; i < nums.size()-1; i++) {
      result.push_back(result[i] * nums[i]);
    }

    int temp = 1;
    for (int i=result.size()-1; i >= 0; i--) {
      result[i] *= temp;
      temp *= nums[i];
    }
    return result;
  }
};
