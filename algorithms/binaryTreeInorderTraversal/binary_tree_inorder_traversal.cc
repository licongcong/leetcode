// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Dec 31 15:13:09 2016
// Source: https://leetcode.com/problems/binary-tree-inorder-traversal/

// Given a binary tree, return the inorder traversal of its nodes' values.

// For example:
// Given binary tree [1,null,2,3],
//    1
//     \
//      2
//     /
//    3
// return [1,3,2].

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
  vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    stack<TreeNode *> node;
        
    while (!node.empty() || root) {
      while (root) {
        node.push(root);
        root = root->left;
      }
            
      if (node.empty()) break;
            
      result.push_back(node.top()->val);
      root = node.top()->right;
      node.pop();
    }
    return result;
  }
};
