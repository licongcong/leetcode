// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Jan 20 20:43:28 2017
// Source: https://leetcode.com/problems/ransom-note/

// Given an arbitrary ransom note string and another string containing letters
// from all the magazines, write a function that will return true if the ransom
// note can be constructed from the magazines ; otherwise, it will return false.

// Each letter in the magazine string can only be used once in your ransom note.

// Note:
// You may assume that both strings contain only lowercase letters.

// canConstruct("a", "b") -> false
// canConstruct("aa", "ab") -> false
// canConstruct("aa", "aab") -> true

class Solution {
 public:
  bool canConstruct(string ransomNote, string magazine) {
    for (int i=0; i<ransomNote.length(); ++i) {
      std::size_t found = magazine.find(ransomNote[i]);
      if (found != std::string::npos) {
        magazine.erase(found, 1);
      } else {
        return false;
      }
    }
        
    return true;
  }
};
