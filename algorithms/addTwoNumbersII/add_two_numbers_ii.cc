// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Dec 26 17:07:24 2016
// Source: https://leetcode.com/problems/add-two-numbers-ii/

// You are given two linked lists representing two non-negative numbers. The
// most significant digit comes first and each of their nodes contain a single
// digit. Add the two numbers and return it as a linked list.

// You may assume the two numbers do not contain any leading zero, except the
// number 0 itself.

// Follow up:
// What if you cannot modify the input lists? In other words, reversing the
// lists is not allowed.

// Example:

// Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 8 -> 0 -> 7

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> num1, num2;
    while (l1) {
      num1.push(l1->val);
      l1 = l1->next;
    }
    while (l2) {
      num2.push(l2->val);
      l2 = l2->next;
    }
    int carry = 0;
    int temp = 0;
    ListNode *tail = NULL;
    while (!num1.empty() && !num2.empty()) {
      temp = num1.top() + num2.top() + carry;
      num1.pop();
      num2.pop();
      if (temp > 9) {
        carry = 1;
        temp %= 10;
      } else {
        carry = 0;
      }
      ListNode *node = new ListNode(temp);
      node->next = tail;
      tail = node;
    }
        
    while (!num1.empty()) {
      temp = num1.top() + carry;
      num1.pop();
      if (temp > 9) {
        carry = 1;
        temp %= 10;
      } else {
        carry = 0;
      }
      ListNode *node = new ListNode(temp);
      node->next = tail;
      tail = node;
    }
        
    while (!num2.empty()) {
      temp = num2.top() + carry;
      num2.pop();
      if (temp > 9) {
        carry = 1;
        temp %= 10;
      } else {
        carry = 0;
      }
      ListNode *node = new ListNode(temp);
      node->next = tail;
      tail = node;
    }
        
    if (carry) {
      ListNode *node = new ListNode(1);
      node->next = tail;
      tail = node;
    }
    return tail;
  }
};
