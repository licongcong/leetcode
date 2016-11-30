// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Wed Nov 30 09:14:56 2016
// Source: https://leetcode.com/problems/third-maximum-number/

// Given a non-empty array of integers, return the third maximum number in this
// array. If it does not exist, return the maximum number. The time complexity
// must be in O(n).

// Example 1:
// Input: [3, 2, 1]

// Output: 1

// Explanation: The third maximum is 1.
// Example 2:
// Input: [1, 2]

// Output: 2

// Explanation: The third maximum does not exist, so the maximum (2) is returned
// instead.
// Example 3:
// Input: [2, 2, 3, 1]

// Output: 1

// Explanation: Note that the third maximum here means the third maximum
// distinct number.
// Both numbers with value 2 are both considered as second maximum.

class Solution {
 public:
  int thirdMax(vector<int>& nums) {
    int size = nums.size();
    if (size <=2 ) return *max_element(nums.begin(), nums.end());

    sort(nums.begin(), nums.end());
    // remove the duplicates in place such that each element appear only once
    int i = 0;
    int j = 0;
    while (j < size) {
      if (nums[i] != nums[j]) {
        nums[i+1] = nums[j];
        i++;
      }
      j++;
    }

    size = i + 1;
    nums.resize(size);
    if (size <= 2) return *max_element(nums.begin(), nums.end());
    return nums[size-3];
  }
};
