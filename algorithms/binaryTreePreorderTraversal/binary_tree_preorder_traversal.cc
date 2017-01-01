// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sun Jan  1 09:38:40 2017
// Source: https://leetcode.com/problems/binary-tree-preorder-traversal/

// Given a binary tree, return the preorder traversal of its nodes' values.

// For example:
// Given binary tree {1,#,2,3},
//    1
//     \
//      2
//     /
//    3
// return [1,2,3].

// Note: Recursive solution is trivial, could you do it iteratively?

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
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> node;
        
    while (root || !node.empty()) {
      while (root) {
        node.push(root);
        result.push_back(root->val);
        root = root->left;
      }
            
      if (node.empty()) break;
            
      root = node.top()->right;
      node.pop();
    }
    return result;
  }
};
