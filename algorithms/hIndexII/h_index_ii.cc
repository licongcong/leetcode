// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Jan 12 21:20:48 2017
// Source: https://leetcode.com/problems/h-index-ii/

// Follow up for H-Index: What if the citations array is sorted in ascending
// order? Could you optimize your algorithm?

// Hint:

// Expected runtime complexity is in O(log n) and the input is sorted.

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    if (citations.empty()) return 0;
        
    int size = citations.size();
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high) {
      mid = low + (high - low) / 2;
      if (citations[mid] >= (size-mid)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    return size - low;
  }
};
