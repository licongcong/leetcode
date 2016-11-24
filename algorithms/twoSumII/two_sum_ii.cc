// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Thu Nov 24 11:31:42 2016
// Source: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

// Given an array of integers that is already sorted in ascending order, find
// two numbers such that they add up to a specific target number.

// The function twoSum should return indices of the two numbers such that they
// add up to the target, where index1 must be less than index2. Please note that
// your returned answers (both index1 and index2) are not zero-based.

// You may assume that each input would have exactly one solution.

// Input: numbers={2, 7, 11, 15}, target=9
// Output: index1=1, index2=2

class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> result;

    int low = 0;
    int high = numbers.size() - 1;
    int sum_nums = 0;
    while (low < high) {
      sum_nums = numbers[low] + numbers[high];
      if (sum_nums == target) {
        result.push_back(low+1);
        result.push_back(high+1);
        break;
      }
      if (sum_nums > target) high--;
      else
        low++;
    }
    return result;
  }
};
