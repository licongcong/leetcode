// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Thu Feb 16 21:28:54 2017
// Source: https://leetcode.com/problems/find-largest-value-in-each-tree-row/

// You need to find the largest value in each row of a binary tree.

// Example:
// Input:

//           1
//          / \
//         3   2
//        / \   \
//       5   3   9

// Output: [1, 3, 9]

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
  vector<int> largestValues(TreeNode* root) {
    vector<int> result;
        
    if (!root) return result;
        
    queue<TreeNode *> tree;
    tree.push(root);
        
    int size = tree.size();
    int max_val = INT_MIN;
    while (!tree.empty()) {
      max_val = INT_MIN;
      for (int i=0; i < size; ++i) {
        max_val = max(max_val, tree.front()->val);
        if (tree.front()->left) tree.push(tree.front()->left);
        if (tree.front()->right) tree.push(tree.front()->right);
                
        tree.pop();
      }
      result.push_back(max_val);
      size = tree.size();
    }
        
    return result;
  }
};
