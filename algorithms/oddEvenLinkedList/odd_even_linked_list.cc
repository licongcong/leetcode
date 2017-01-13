// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Jan 13 21:13:31 2017
// Source: https://leetcode.com/problems/odd-even-linked-list/

// Given a singly linked list, group all odd nodes together followed by the even
// nodes. Please note here we are talking about the node number and not the
// value in the nodes.

// You should try to do it in place. The program should run in O(1) space
// complexity and O(nodes) time complexity.

// Example:
// Given 1->2->3->4->5->NULL,
// return 1->3->5->2->4->NULL.

// Note:
// The relative order inside both the even and odd groups should remain as it
// was in the input.
// The first node is considered odd, the second node even and so on ...

// Credits:
// Special thanks to @DjangoUnchained for adding this problem and creating all
// test cases.

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
  ListNode* oddEvenList(ListNode* head) {
    if (!head) return NULL;
    if (!head->next) return head;
    ListNode *phony = new ListNode(0);
    phony->next = head;
        
    ListNode *odd = head;
    ListNode *even = phony;
    ListNode *tail = odd;
    while (odd && odd->next) {
      even->next = odd->next;
      even = even->next;
      tail = odd;
      odd->next = odd->next->next;
      odd = odd->next;
    }
    even->next = NULL;
        
    if (odd) {
      tail->next = odd;
      tail = tail->next;
    }
        
    tail->next = phony->next;
    return head;
  }
};
