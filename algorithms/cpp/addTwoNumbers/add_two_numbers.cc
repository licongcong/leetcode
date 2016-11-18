// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Nov 18 10:20:10 2016
// Source: https://leetcode.com/problems/add-two-numbers/

// You are given two linked lists representing two non-negative numbers.
// The digits are stored in reverse order and each of their nodes contain a
// single digit. Add the two numbers and return it as a linked list.

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8

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
    // edge case
    if (!l1) return l2;
    if (!l2) return l1;

    int temp = 0;
    int carry = 0;
    ListNode *head = l1;
    ListNode *tail = l1;
    while (l1 && l2) {
      temp = l1->val + l2->val + carry;
      carry = 0;
      if (temp > 9) {
        carry = 1;
      }
      l1->val = temp%10;
      tail = l1;
      l1 = l1->next;
      l2 = l2->next;
    }

    // l1 is not finish
    while (l1) {
      temp = l1->val + carry;
      carry = 0;
      if (temp > 9) {
        carry = 1;
      }
      tail = l1;
      l1->val = temp % 10;
      l1 = l1->next;
    }

    // l2 is not finish
    if (l2) tail->next = l2;
    while (l2) {
      temp = l2->val + carry;
      carry = 0;
      if (temp > 9) {
        carry = 1;
      }
      l2->val = temp % 10;
      tail = l2;
      l2 = l2->next;
    }

    // final carry
    if (carry) {
      ListNode *node = new ListNode(carry);
      tail->next = node;
    }
    return head;
  }
};
