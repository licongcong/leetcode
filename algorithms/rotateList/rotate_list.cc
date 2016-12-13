// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Nov 25 10:16:15 2016
// Source: https://leetcode.com/problems/rotate-list/

// Given a list, rotate the list to the right by k places, where k is
// non-negative.

// For example:
// Given 1->2->3->4->5->NULL and k = 2,
// return 4->5->1->2->3->NULL.

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
  ListNode* rotateRight(ListNode* head, int k) {
    // edge cast
    if (!head) return NULL;

    // size of list
    int len = 1;
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast->next) {
      len++;
      fast = fast->next;
    }

    k %= len;
    if (!k) return head;

    fast = head;
    while (k) {
      fast = fast->next;
      k--;
    }

    // move slow to k+1 node
    while (fast->next) {
      fast = fast->next;
      slow = slow->next;
    }

    // split list
    fast = slow->next;
    slow->next = NULL;
    ListNode *new_head = fast;

    // merge list
    while (fast->next) {
      fast = fast->next;
    }
    fast->next = head;
    return new_head;
  }
};
