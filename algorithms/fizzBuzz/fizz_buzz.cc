// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Jan 17 20:29:36 2017
// Source: https://leetcode.com/problems/fizz-buzz/

// Write a program that outputs the string representation of numbers from 1 to
// n.

// But for multiples of three it should output “Fizz” instead of the number
// and for the multiples of five output “Buzz”. For numbers which are multiples
// of both three and five output “FizzBuzz”.

// Example:

// n = 15,

// Return:
// [
//     "1",
//     "2",
//     "Fizz",
//     "4",
//     "Buzz",
//     "Fizz",
//     "7",
//     "8",
//     "Fizz",
//     "Buzz",
//     "11",
//     "Fizz",
//     "13",
//     "14",
//     "FizzBuzz"
// ]

class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for (int i=0; i < n; i++) {
      if ((i+1)%3 != 0 && (i+1)%5 != 0) {
        ans.push_back(to_string(i+1));
      } else if ((i+1)%3 == 0 && (i+1)%5 != 0) {
        ans.push_back("Fizz");
      } else if ((i+1)%3 != 0 && (i+1)%5 == 0) {
        ans.push_back("Buzz");
      } else {
        ans.push_back("FizzBuzz");
      }
    }
    return ans;
  }
};
