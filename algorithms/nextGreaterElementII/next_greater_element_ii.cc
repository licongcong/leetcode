// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Feb  8 21:21:47 2017
// Source: https://leetcode.com/problems/next-greater-element-ii/

// Given a circular array (the next element of the last element is the first
// element of the array), print the Next Greater Number for every element. The
// Next Greater Number of a number x is the first greater number to its
// traversing-order next in the array, which means you could search circularly
// to find its next greater number. If it doesn't exist, output -1 for this
// number.

// Example 1:
// Input: [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2;
// The number 2 can't find next greater number;
// The second 1's next greater number needs to search circularly, which is
// also 2.
// Note: The length of given array won't exceed 10000.

class Solution {
 public:
  vector<int> nextGreaterElements(vector<int>& nums) {
    vector<int> result;

    int size = nums.size();
    int j = 0;
    for (int i=0; i < size; i++) {
      j = (i+1)%size;
      while (j != i) {
        if (nums[j] > nums[i]) {
          result.push_back(nums[j]);
          break;
        }
        j = (j+1)%size;
      }
      if (i == j) result.push_back(-1);
    }
    return result;
  }
};

