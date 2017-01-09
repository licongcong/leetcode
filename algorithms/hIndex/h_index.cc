// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Jan  9 21:05:31 2017
// Source: https://leetcode.com/problems/h-index/

// Given an array of citations (each citation is a non-negative integer) of a
// researcher, write a function to compute the researcher's h-index.

// According to the definition of h-index on Wikipedia: "A scientist has index h
// if h of his/her N papers have at least h citations each, and the other N − h
// papers have no more than h citations each."

// For example, given citations = [3, 0, 6, 1, 5], which means the researcher
// has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations
// respectively. Since the researcher has 3 papers with at least 3 citations
// each and the remaining two with no more than 3 citations each, his h-index
// is 3.

// Note: If there are several possible values for h, the maximum one is taken
// as the h-index.

// Hint:

// An easy approach is to sort the array first.
// What are the possible values of h-index?
// A faster approach is to use extra space.
// Credits:
// Special thanks to @jianchao.li.fighter for adding this problem and creating
// all test cases.

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    if (citations.empty()) return 0;
        
    sort(citations.begin(), citations.end());
        
    int size = citations.size();
    int i=size;
    for (i=size-1 ; i >= 0; i--) {
      if (citations[i] && citations[i] >= size-i) {
        continue;
      } else {
        return size-i-1;
      }
    }
    return size-i-1;
  }
};
