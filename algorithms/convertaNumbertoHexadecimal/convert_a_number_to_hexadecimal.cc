// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Jan 16 21:36:17 2017
// Source: https://leetcode.com/problems/convert-a-number-to-hexadecimal/

// Given an integer, write an algorithm to convert it to hexadecimal.
// For negative integer, two’s complement method is used.

// Note:

// All letters in hexadecimal (a-f) must be in lowercase.
// The hexadecimal string must not contain extra leading 0s. If the number is
// zero, it is represented by a single zero character '0'; otherwise, the first
// character in the hexadecimal string will not be the zero character.
// The given number is guaranteed to fit within the range of a 32-bit signed
// integer.
// You must not use any method provided by the library which converts/formats
// the number to hex directly.
// Example 1:

// Input:
// 26

// Output:
// "1a"
// Example 2:

// Input:
// -1

// Output:
// "ffffffff"

class Solution {
 public:
  string toHex(int num) {
    if (num == 0) return "0";
    string ans = "";
    int mask = 0b00000000000000000000000000001111;
        
    string hex[] = {"0", "1", "2", "3", 
                    "4", "5", "6", "7",
                    "8", "9", "a", "b", 
                    "c", "d", "e", "f"};
    unsigned int index = 0;
    while (num) {
      index = num & mask;
      ans.insert(0, hex[index]);
      num = num >> 4;
      if (num < 0) {
        num = num & 0b00001111111111111111111111111111;
      }
    }
    return ans;
  }
};
