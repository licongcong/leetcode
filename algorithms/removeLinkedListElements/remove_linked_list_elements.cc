// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Nov 26 09:06:51 2016
// Source: https://leetcode.com/problems/remove-linked-list-elements/

// Remove all elements from a linked list of integers that have value val.

// Example
// Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
// Return: 1 --> 2 --> 3 --> 4 --> 5

// Credits:
// Special thanks to @mithmatt for adding this problem and creating all test
// cases.

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
  ListNode* removeElements(ListNode* head, int val) {
    ListNode *phony = new ListNode(0);
    phony->next = head;

    ListNode *prev = phony;
    ListNode *curr = head;
    while (curr) {
      while (curr && curr->val == val) {
        curr = curr->next;
      }
      prev->next = curr;
      prev = prev->next;
      if (curr) curr = curr->next;
    }
    return phony->next;
  }
};

