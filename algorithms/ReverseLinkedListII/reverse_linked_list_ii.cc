// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Nov 28 10:05:21 2016
// Source: https://leetcode.com/problems/reverse-linked-list-ii/

// Reverse a linked list from position m to n. Do it in-place and in one-pass.

// For example:
// Given 1->2->3->4->5->NULL, m = 2 and n = 4,

// return 1->4->3->2->5->NULL.

// Note:
// Given m, n satisfy the following condition:
// 1 ≤ m ≤ n ≤ length of list.

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
  ListNode* reverseBetween(ListNode* head, int m, int n) {
    if (m == n) return head;
    ListNode *phony = new ListNode(0);
    phony->next = head;

    ListNode *from = phony;
    ListNode *to = head;
    ListNode *tail = head;
    ListNode *pointer = head;
    int i = 1;
    while (i < n) {
      if (i + 1 == m) {
        from = pointer;
      }
      pointer = pointer->next;
      i++;
    }
    if (m == 1) phony->next = to;

    to = pointer;
    tail = pointer->next;
    pointer = from->next;
    from->next = to;
    cout << from->val << endl;
    i = 0;
    int len = n - m;
    ListNode *temp = pointer;
    while (i < len) {
      temp = pointer->next;
      pointer->next = tail;
      tail = pointer;
      pointer = temp;
      i++;
    }
    to->next = tail;
    return phony->next;
  }
};
