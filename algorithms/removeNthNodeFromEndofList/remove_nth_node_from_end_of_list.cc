// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Nov 25 09:40:23 2016
// Source: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Given a linked list, remove the nth node from the end of list and return its
// head.

// For example,

//    Given linked list: 1->2->3->4->5, and n = 2.

//    After removing the second node from the end, the linked list becomes
//    1->2->3->5.
// Note:
// Given n will always be valid.
// Try to do this in one pass.

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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (!head->next && n == 1) return NULL;

    ListNode *fast = head;
    ListNode *slow = head;
    while (n) {
      n--;
      fast = fast->next;
    }

    // head is the nth node from end of list
    if (!fast) {
      head = head->next;
      return head;
    }

    // move slow to nth+1
    while (fast->next) {
      slow = slow->next;
      fast = fast->next;
    }
    slow->next = slow->next->next;

    return head;
  }
};
