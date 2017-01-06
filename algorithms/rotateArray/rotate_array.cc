// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Jan  6 20:45:58 2017
// Source: https://leetcode.com/problems/rotate-array/

// Rotate an array of n elements to the right by k steps.

// For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to
// [5,6,7,1,2,3,4].

// Note:
// Try to come up as many solutions as you can, there are at least 3 different
// ways to solve this problem.

// [show hint]

// Related problem: Reverse Words in a String II

// Credits:
// Special thanks to @Freezen for adding this problem and creating all test
// cases.

class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    if (k < -1) {
      nums.erase(nums.begin(), nums.end());
      return;
    }
        
    if (k == -1) {
      nums.erase(nums.begin(), nums.begin()+1);
      nums.push_back(0);
      return;
    }
        
    int size = nums.size();
    k = k % size;
        
    nums.insert(nums.end(), nums.begin(), nums.begin()+size-k);
    nums.erase(nums.begin(), nums.begin()+size-k);
    return;
  }
};
