// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Feb  6 21:41:46 2017
// Source: https://leetcode.com/problems/longest-palindrome/

// Given a string which consists of lowercase or uppercase letters, find the
// length of the longest palindromes that can be built with those letters.

// This is case sensitive, for example "Aa" is not considered a palindrome here.

// Note:
// Assume the length of given string will not exceed 1,010.

// Example:

// Input:
// "abccccdd"

// Output:
// 7

// Explanation:
// One longest palindrome that can be built is "dccaccd", whose length is 7.

class Solution {
 public:
  int longestPalindrome(string s) {
    vector<int> nums(128, 0);
    for (char c : s) {
      nums[c]++;
    }
    
    int result = accumulate(nums.begin(), nums.end(), 0);
        
    int odd = count_if(nums.begin(), nums.end(), [](int x){return x%2;} );
        
    if (odd) return result - odd + 1;
    else return result;
  }
};
