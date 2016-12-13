// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Dec  3 08:38:14 2016
// Source: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// Suppose a sorted array is rotated at some pivot unknown to you beforehand.

// (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

// Find the minimum element.

// You may assume no duplicate exists in the array.

// solution 1
class Solution {
 public:
  int findMin(vector<int>& nums) {
    if (nums.empty()) return 0;

    int low = 0;
    int high = nums.size() - 1;
    int mid;

    if (nums[low] < nums[high]) return nums[low];

    while (low < high) {
      mid = low + (high - low) / 2;
      if (nums[mid] == nums[low]) break;

      if (nums[mid] < nums[low]) high = mid;
      else
        low = mid;
    }
    return nums[high];
  }
};

// solution 2
class Solution {
 public:
  int findMin(vector<int>& nums) {
    if (nums.empty()) return 0;
    return *min_element(nums.begin(), nums.end());
  }
};
