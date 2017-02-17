// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Fri Feb 17 23:47:03 2017
// Source: https://leetcode.com/problems/find-bottom-left-tree-value/

// Given a binary tree, find the leftmost value in the last row of the tree.

// Example 1:
// Input:

//     2
//    / \
//   1   3

// Output:
// 1
// Example 2: 
// Input:

//         1
//        / \
//       2   3
//      /   / \
//     4   5   6
//        /
//       7

// Output:
// 7
// Note: You may assume the tree (i.e., the given root node) is not NULL.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
 public:
  int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode *> tree;
    queue<int> level;
        
    tree.push(root);
    level.push(0);
        
    TreeNode * curr;
    int lev;
    int now = -1;
    while (!tree.empty()) {
      curr = tree.front();
      tree.pop();
      lev = level.front();
      level.pop();
            
      if (curr->left) {
        tree.push(curr->left);
        level.push(lev+1);
      }
            
      if (curr->right) {
        tree.push(curr->right);
        level.push(lev+1);
      }
            
      if (lev > now) {
        now = lev;
        root = curr;
      }
    }
        
    return root->val;
  }
};
