// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Dec 16 17:07:41 2016
// Source: https://leetcode.com/problems/valid-palindrome/

// Given a string, determine if it is a palindrome, considering only
// alphanumeric characters and ignoring cases.

// For example,
// "A man, a plan, a canal: Panama" is a palindrome.
// "race a car" is not a palindrome.

// Note:
// Have you consider that the string might be empty? This is a good question to
// ask during an interview.

// For the purpose of this problem, we define empty string as valid palindrome.

class Solution {
 public:
  bool isPalindrome(string s) {
    int head = 0;
    int tail = s.size()-1;
    while (head < tail) {
      if (!isalnum(s[head])) {
        head++;
        continue;
      }
      if (!isalnum(s[tail])) {
        tail--;
        continue;
      }
      if (toupper(s[head]) == toupper(s[tail])) {
        head++;
        tail--;
      } else {
        return false;
      }
    }
    return true;
  }
};