// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Nov 14 08:48:54 2016
// Source: https://leetcode.com/problems/merge-two-sorted-lists/

// Merge two sorted linked lists and return it as a new list. The new list
// should be made by splicing together the nodes of the first two lists.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNoaaade *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // list1 is null
    if (!l1) {
      return l2;
    }

    // list 2 is null
    if (!l2) {
      return l1;
    }

    // list1 and list2 are not null
    ListNode *head = NULL;
    ListNode *tail = NULL;
    // first node
    if (l1->val < l2->val) {
      tail = l1;
      head = l1;
      l1 = l1->next;
    } else {
      tail = l2;
      head = l2;
      l2 = l2->next;
    }
    // others
    while (l1 && l2) {
      if (l1->val < l2->val) {
        tail->next = l1;
        tail = tail->next;
        l1 = l1->next;
      } else {
        tail->next = l2;
        tail = tail->next;
        l2 = l2->next;
      }
    }

    // unfinished list
    if (l1) {
      tail->next = l1;
    }
    if (l2) {
      tail->next = l2;
    }
    return head;
  }
};
