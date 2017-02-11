// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Feb 11 22:30:58 2017
// Source: https://leetcode.com/problems/find-all-anagrams-in-a-string/

// Given a string s and a non-empty string p, find all the start indices of p's
// anagrams in s.

// Strings consists of lowercase English letters only and the length of both
// strings s and p will not be larger than 20,100.

// The order of output does not matter.

// Example 1:

// Input:
// s: "cbaebabacd" p: "abc"

// Output:
// [0, 6]

// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".
// Example 2:

// Input:
// s: "abab" p: "ab"

// Output:
// [0, 1, 2]

// Explanation:
// The substring with start index = 0 is "ab", which is an anagram of "ab".
// The substring with start index = 1 is "ba", which is an anagram of "ab".
// The substring with start index = 2 is "ab", which is an anagram of "ab".

class Solution {
 public:
  vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    vector<int> ssub(26, 0), psub(26, 0);
        
    int s_size = s.size();
    int p_size = p.size();
        
    if (s_size < p_size) return result;
        
    for (int i=0; i < p_size; ++i) {
      ++ssub[s[i]-'a'];
      ++psub[p[i]-'a'];
    }
        
    if (ssub == psub) result.push_back(0);
        
    for (int i=p_size; i < s_size; ++i) {
      ++ssub[s[i]-'a'];
      --ssub[s[i-p_size]-'a'];
            
      if (ssub == psub) result.push_back(i-p_size+1);
    }
        
    return result;
        
  }
};
