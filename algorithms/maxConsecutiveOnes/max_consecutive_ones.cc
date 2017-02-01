// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Wed Feb  1 20:11:32 2017
// Source: https://leetcode.com/problems/max-consecutive-ones/

// Given a binary array, find the maximum number of consecutive 1s in this
// array.

// Example 1:
// Input: [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive
// 1s. The maximum number of consecutive 1s is 3.

// Note:

// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000

class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int result = 0;
    int length = 0;
    for (int i=0; i < nums.size(); i++) {
      if (nums[i]) {
        length++;
      } else {
        result = max(result, length);
        length = 0;
      }
    }
    result = max(result, length);
    return result;
  }
};
