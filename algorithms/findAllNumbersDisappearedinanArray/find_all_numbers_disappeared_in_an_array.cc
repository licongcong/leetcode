// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Nov 29 10:28:47 2016
// Source: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

// Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some
// elements appear twice and others appear once.

// Find all the elements of [1, n] inclusive that do not appear in this array.

// Could you do it without extra space and in O(n) runtime? You may assume the
// returned list does not count as extra space.

// Example:

// Input:
// [4,3,2,7,8,2,3,1]

// Output:
// [5,6]

class Solution {
 public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    int size = nums.size();
    vector<int> result(size);

    for (int i=0; i < size; i++) {
      result[nums[i]-1] = -1;
    }

    int miss = 0;
    for (int i=0; i < size; i++) {
      if (result[i] == -1) {
        continue;
      } else {
        result[miss] = i+1;
        miss++;
      }
    }

    result.resize(miss);
    return result;
  }
};
