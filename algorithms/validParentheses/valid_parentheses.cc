// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Nov 21 10:07:03 2016
// Source: https://leetcode.com/problems/valid-parentheses/

// Given a string containing just the characters '(', ')', '{', '}', '['
// and ']', determine if the input string is valid.

// The brackets must close in the correct order, "()" and "()[]{}" are all
// valid but "(]" and "([)]" are not.

class Solution {
 public:
  bool isValid(string s) {
    map<char, char> table{{'(', ')'}, {'[', ']'}, {'{', '}'}};
    stack<char> left;
    for (auto c:s) {
      if (c=='(' || c=='[' || c=='{')
        left.push(c);
      else if ((!left.empty()) && table[left.top()]==c)
        left.pop();
      else
        return false;
    }
    if (left.empty())
      return true;
    else
      return false;
  }
};
