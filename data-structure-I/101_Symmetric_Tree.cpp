/*
https://leetcode.com/problems/symmetric-tree/

Test Case-1:
[1,2,2,null,3,null,3]
*/

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
    bool getDecision(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL)
            return true;
        if(left && right && left->val == right->val)
            return getDecision(left->left, right->right) && getDecision(left->right, right->left);
        return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        return getDecision(root->left, root->right);
    }
};