// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Jan 10 09:33:12 2017
// Source: https://leetcode.com/problems/linked-list-cycle-ii/

// Given a linked list, return the node where the cycle begins.
// If there is no cycle, return null.

// Note: Do not modify the linked list.

// Follow up:
// Can you solve it without using extra space?

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
  ListNode *detectCycle(ListNode *head) {
    if (!head) return NULL;
        
    ListNode *fast = head;
    ListNode *slow = head;
  
    bool cycle = false;
    while (fast->next && fast->next->next) {
      fast = fast->next->next;
      slow = slow->next;
  
      if (fast == slow) {
        cycle = true;
        break;
      }
    }
        
    if (!cycle) return NULL;
    else {
      slow = head;
      while (slow != fast) {
        fast = fast->next;
        slow = slow->next;
      }
      return fast;
    }
  }
};
