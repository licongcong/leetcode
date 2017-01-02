// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Mon Jan  2 09:54:50 2017
// Source: https://leetcode.com/problems/binary-tree-postorder-traversal/

// Given a binary tree, return the postorder traversal of its nodes' values.

// For example:
// Given binary tree {1,#,2,3},
//    1
//     \
//      2
//     /
//    3
// return [3,2,1].

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
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode *> node;
    stack<int> tags;
        
    while (root || !node.empty()) {
      while (root) {
        node.push(root);
        tags.push(0);
        root = root->left;
      }
            
      while (!node.empty() && tags.top()) {
        result.push_back(node.top()->val);
        node.pop();
        tags.pop();
      }
            
      if (node.empty()) {
        break;
      } else {
        tags.pop();
        tags.push(1);
        root = node.top()->right;
      }
    }
        
    return result;
  }
};
