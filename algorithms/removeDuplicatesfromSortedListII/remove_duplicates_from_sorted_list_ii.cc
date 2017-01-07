// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Jan  7 20:51:37 2017
// Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

// Given a sorted linked list, delete all nodes that have duplicate numbers,
// leaving only distinct numbers from the original list.

// For example,
// Given 1->2->3->3->4->4->5, return 1->2->5.
// Given 1->1->1->2->3, return 2->3.

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
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode *phony = new ListNode(0);
    phony->next = head;
        
    ListNode *curr = phony->next;
    ListNode *tail = phony;
    while (curr && curr->next) {
      if (curr->val == curr->next->val) {
        while (curr->next && curr->val == curr->next->val) {
          curr = curr->next;
        }
        tail->next = curr->next;
        curr = tail;
      } else {
        tail = curr;
      }
      curr = curr->next;
    }
    return phony->next;
  }
};
