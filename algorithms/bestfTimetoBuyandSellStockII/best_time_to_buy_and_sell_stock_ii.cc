// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Dec 30 09:15:24 2016
// Source: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

// Say you have an array for which the ith element is the price of a given stock
// on day i.

// Design an algorithm to find the maximum profit. You may complete as many
// transactions as you like (ie, buy one and sell one share of the stock
// multiple times). However, you may not engage in multiple transactions at the
// same time (ie, you must sell the stock before you buy again).

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int size = prices.size();
    if (size < 2) return 0;
        
    int buy = 0;
    int sale = 1;
    int result = 0;
        
    while (sale < size) {
      if (prices[sale] >= prices[sale-1]) {
        sale++;
      } else {
        result += prices[sale-1] - prices[buy];
        buy = sale;
        sale++;
      }
      if (sale == size) result += max(0, prices[sale-1] - prices[buy]);
    } 
    return result;
  }
};

