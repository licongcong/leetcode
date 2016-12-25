// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Dec 25 17:03:00 2016
// Source: https://leetcode.com/problems/candy/

// There are N children standing in a line. Each child is assigned a rating
// value.

// You are giving candies to these children subjected to the following
// requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// What is the minimum candies you must give?

class Solution {
 public:
  int candy(vector<int>& ratings) {
    vector<int> candy(ratings.size(), 1);
    int i = 0;
    int j = 1;
    int index = 0;
    while (j < ratings.size()) {
      if (ratings[i] == ratings[j]) {
        i++;
        j++;
        continue;
      }
      
      if (ratings[i] < ratings[j]) {
        candy[j] = candy[i] + 1;
        i++;
        j++;
        continue;
      } else {
        while (j+1 < ratings.size() && ratings[j] > ratings[j+1]) {
          j++;
        }
        index = j;
        j--;
        while (j > i) {
          candy[j] = candy[j+1] + 1;
          j--;
        }
        candy[j] = max(candy[j], candy[j+1]+1);
        i = index;
        j = index + 1;
      }
    }

    return accumulate(candy.begin(), candy.end(), 0);
  }
};
