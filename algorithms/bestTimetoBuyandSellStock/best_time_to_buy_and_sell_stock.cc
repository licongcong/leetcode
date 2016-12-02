// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Dec  2 11:33:42 2016
// Source: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// Say you have an array for which the ith element is the price of a given stock
// on day i.

// If you were only permitted to complete at most one transaction (ie, buy one
// and sell one share of the stock), design an algorithm to find the maximum
// profit.

// Example 1:
// Input: [7, 1, 5, 3, 6, 4]
// Output: 5

// max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger
// than buying price)
// Example 2:
// Input: [7, 6, 4, 3, 1]
// Output: 0

// In this case, no transaction is done, i.e. max profit = 0.

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int buy = INT_MAX;
    int profit = 0;
    for (int i=0; i < prices.size(); i++) {
      buy = min(buy, prices[i]);
      profit = max(profit, prices[i] - buy);
    }
    return profit;
  }
};
