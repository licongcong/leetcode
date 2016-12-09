// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Fri Dec  9 22:43:15 2016
// Source: https://leetcode.com/problems/swap-nodes-in-pairs/

// Given a linked list, swap every two adjacent nodes and return its head.

// For example,
// Given 1->2->3->4, you should return the list as 2->1->4->3.

// Your algorithm should use only constant space. You may not modify the values
// in the list, only nodes itself can be changed.

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
  ListNode* swapPairs(ListNode* head) {
    if (!head) return NULL;
    if (!head->next) return head;
    
    ListNode *new_head = head->next;
    ListNode *tail = head;
    ListNode *unvisited = new_head->next;
    new_head->next = head;
    head->next = unvisited;
    head = unvisited;

    while (unvisited) {
      if (unvisited->next) {
        if (unvisited->next->next) {
          unvisited = unvisited->next->next;
          tail->next = head->next;
          tail = tail->next;
          tail->next = head;
          head->next = unvisited;
                    
          tail = head;
          head = unvisited;
        } else {
          tail->next = unvisited->next;
          tail = tail->next;
          tail->next = unvisited;
          unvisited->next = NULL;
          unvisited = unvisited->next;
        }
      } else {
        return new_head;
      }
    }
    return new_head;
  }
};
