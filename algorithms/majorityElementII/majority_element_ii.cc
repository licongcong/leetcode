// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Dec  2 10:41:59 2016
// Source: https://leetcode.com/problems/majority-element-ii/

// Given an integer array of size n, find all elements that appear more than
// ⌊ n/3 ⌋ times. The algorithm should run in linear time and in O(1) space.

class Solution {
 public:
  vector<int> majorityElement(vector<int>& nums) {
    // edge case, nums is empty
    if (nums.empty()) return nums;

    vector<int> result;
    int size = nums.size();
    int count1 = 0;
    int count2 = 0;
    int majority1 = nums[0];
    int majority2;
    // find two different element
    for (int num : nums) {
      if (num == majority1) {
        count1++;
      } else {
        majority2 = num;
        count2++;
        break;
      }
    }
    // edge case, all elements are the same
    if (count1 == size) {
      result.push_back(majority1);
      return result;
    }
    // find majority elements
    for (int i=count1+count2; i < size; i++) {
      if (nums[i] == majority1) {
        count1++;
      } else if (nums[i] == majority2) {
        count2++;
      } else if (count1 == 0) {
        majority1 = nums[i];
        count1++;
      } else if (count2 == 0) {
        majority2 = nums[i];
        count2++;
      } else {
        count1--;
        count2--;
      }
    }

    count1 = 0;
    count2 = 0;
    for (int num : nums) {
      if (num == majority1) count1++;
      if (num == majority2) count2++;
    }
    if (count1 > size/3) result.push_back(majority1);
    if (count2 > size/3) result.push_back(majority2);
    return result;
  }
};
