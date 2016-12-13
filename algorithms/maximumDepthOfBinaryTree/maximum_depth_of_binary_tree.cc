// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Nov 15 10:51:05 2016
// Source: https://leetcode.com/problems/maximum-depth-of-binary-tree/

// Given a binary tree, find its maximum depth.

// The maximum depth is the number of nodes along the longest path from the
// root node down to the farthest leaf node.

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
  int maxDepth(TreeNode* root) {
    if (!root) return 0;
    int n_left = maxDepth(root->left) + 1;
    int n_right = maxDepth(root->right) + 1;
    return n_left > n_right ? n_left : n_right;
  }
};
