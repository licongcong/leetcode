// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Thu Nov 17 16:18:56 2016
// Source: https://leetcode.com/problems/first-bad-version/

// You are a product manager and currently leading a team to develop a new
// product. Unfortunately, the latest version of your product fails the quality
// check. Since each version is developed based on the previous version,
// all the versions after a bad version are also bad.

// Suppose you have n versions [1, 2, ..., n] and you want to find out the first
// bad one, which causes all the following ones to be bad.

// You are given an API bool isBadVersion(version) which will return whether
// version is bad. Implement a function to find the first bad version.
// You should minimize the number of calls to the API.

// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
 public:
  int firstBadVersion(int n) {
    int low = 1;
    int high = n;
    int mid;

    while (low < high) {
      // avoid overflow
      mid = low + ((high - low) >> 1);
      if (isBadVersion(mid)) {
        high = mid;
      } else {
        low = mid + 1;
      }
    }
    return high;
  }
};
