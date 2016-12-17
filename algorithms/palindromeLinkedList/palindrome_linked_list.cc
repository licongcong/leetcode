// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Dec 17 22:27:40 2016
// Source: https://leetcode.com/problems/palindrome-linked-list/

// Given a singly linked list, determine if it is a palindrome.

// Follow up:
// Could you do it in O(n) time and O(1) space?

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
  bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;
    
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next !=NULL && fast->next->next != NULL) {
      slow = slow->next;
      fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    
    slow = fast;
    fast = fast->next;
    if (!fast) {
      fast = slow;
    } else {
      ListNode *temp = fast->next;
      slow->next = NULL;
      while (temp) {
        fast->next = slow;
        slow = fast;
        fast = temp;
        temp = temp->next;
      }
      fast->next = slow;
    }
    
    slow = head;
    while (fast) {
      if (slow->val == fast->val) {
        slow = slow->next;
        fast = fast->next;
      } else {
        return false;
      }
    }
    return true;
  }
};
