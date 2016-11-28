// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Nov 25 15:23:36 2016
// Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// Given a sorted linked list, delete all duplicates such that each element
// appear only once.

// For example,
// Given 1->1->2, return 1->2.
// Given 1->1->2->3->3, return 1->2->3.

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
    if (!head) return NULL;
    if (!head->next) return head;

    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast) {
      if (fast->val != slow->val) {
        slow->next = fast;
        fast = fast->next;
        slow = slow->next;
      } else {
        fast = fast->next;
      }
      // [a, a, a...]
      if (!fast) slow->next = NULL;
    }
    return head;
  }
};
