// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Feb 13 21:53:23 2017
// Source: https://leetcode.com/problems/largest-number/

// Given a list of non negative integers, arrange them such that they form the
// largest number.

// For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.

// Note: The result may be very large, so you need to return a string instead of
// an integer.

// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.

class Solution {
 public:
  string largestNumber(vector<int>& nums) {
    string result;
    if (nums.empty()) return result;

    sort(nums.begin(), nums.end(),
         [](int num1, int num2) {
           return to_string(num1)+to_string(num2) >
               to_string(num2)+to_string(num1); });

    for (int num : nums) {
      result += to_string(num);
    }

    while (result[0] == '0' && result.size() > 1) {
      result.erase(0, 1);
    }
    return result;
  }
};
