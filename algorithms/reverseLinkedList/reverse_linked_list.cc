// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Jan 29 23:47:04 2017
// Source: https://leetcode.com/problems/reverse-linked-list/

// Reverse a singly linked list.

/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
 public:
  ListNode* reverseList(ListNode* head) {
    // edge case
    if (!head) return NULL;
    // only one node
    if (!(head->next)) return head;
        
    // multi node
    // head is tail, need to set head->next = null
    ListNode *new_head = head;
    ListNode *next_head = new_head->next;
    new_head = next_head;
    next_head = new_head->next;
    new_head->next = head;
    head->next = NULL;
    head = new_head;
        
    // others
    while(next_head) {
      new_head = next_head;
      next_head = new_head->next;
      new_head->next = head;
      head = new_head;
    }
    return new_head;
  }
};
