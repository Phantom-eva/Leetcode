// @before-stub-for-debug-begin

// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int> &out){
        if(root == NULL){
            return;
        }
        inorder(root->left,out);
        out.push_back(root->val);
        inorder(root->right,out);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out;
        inorder(root,out);
        return out;
    }
};
// @lc code=end

