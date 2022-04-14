/*
https://leetcode.com/problems/invert-binary-tree/

Test Case-1:
[1,2]
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
    void rotateNodes(TreeNode* root){
        if(root == NULL)
            return;
        if(root->left != NULL || root->right != NULL){
            TreeNode* tmpNode = root->left;
            root->left = root->right;
            root->right = tmpNode;
            rotateNodes(root->left);
            rotateNodes(root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        rotateNodes(root);
        return root;
    }
};