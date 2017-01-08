// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Jan  8 21:37:37 2017
// Source: https://leetcode.com/problems/linked-list-cycle/

// Given a linked list, determine if it has a cycle in it.

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
  bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
        
    ListNode *fast = head;
    ListNode *slow = head;
        
    while (fast->next && fast->next->next) {
      fast = fast->next->next;
      slow = slow->next;
            
      if (fast == slow) return true;
    }
    return false;
  }
};
