// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Dec 15 20:55:38 2016
// Source: https://leetcode.com/problems/reverse-vowels-of-a-string/

// Write a function that takes a string as input and reverse only the vowels of
// a string.

// Example 1:
// Given s = "hello", return "holle".

// Example 2:
// Given s = "leetcode", return "leotcede".

// Note:
// The vowels does not include the letter "y".

class Solution {
 public:
  string reverseVowels(string s) {
    int i = 0;
    int j = s.size()-1;
    while (i < j) {
      if (!isVowel(s[i])) {
        i++;
        continue;
      }
      if (!isVowel(s[j])) {
        j--;
        continue;
      }
      swap(s[i], s[j]);
      i++;
      j--;
    }
    return s;
  }
  bool isVowel(char c) {
    for (char x : "aeiouAEIOU") {
      if (c == x) return true;
    }
    return false;
  }
};
