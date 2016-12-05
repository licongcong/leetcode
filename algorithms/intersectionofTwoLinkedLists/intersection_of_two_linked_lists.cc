// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Mon Dec  5 11:37:33 2016
// Source: https://leetcode.com/problems/intersection-of-two-linked-lists/

// Write a program to find the node at which the intersection of two singly
// linked lists begins.

// For example, the following two linked lists:

// A:          a1 → a2
//                    ↘
//                      c1 → c2 → c3
//                    ↗
// B:     b1 → b2 → b3
// begin to intersect at node c1.


// Notes:

// If the two linked lists have no intersection at all, return null.
// The linked lists must retain their original structure after the function
// returns.
// You may assume there are no cycles anywhere in the entire linked structure.
// Your code should preferably run in O(n) time and use only O(1) memory.
// Credits:
// Special thanks to @stellari for adding this problem and creating all test
// cases.

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
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA) return NULL;
    if (!headB) return NULL;
        
    int a_size = 0;
    int b_size = 0;
    ListNode *a_head = headA;
    ListNode *b_head = headB;
    while (a_head) {
      a_size++;
      a_head = a_head->next;
    }
    
    b_head = headB;
    while (a_head) {
      b_size++;
      b_head = b_head->next;
    }
        
    while (a_size > b_size) {
      a_head = a_head->next;
      a_size--;
    }
    while (b_size > a_size) {
      b_head = b_head->next;
      b_size--;
    }
        
    while (a_head != b_head) {
      a_head = a_head->next;
      b_head = b_head->next;
    }
    return a_head;
  }
};
