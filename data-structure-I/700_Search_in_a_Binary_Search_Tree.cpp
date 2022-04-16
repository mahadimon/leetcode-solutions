/*
https://leetcode.com/problems/search-in-a-binary-search-tree/

Test Case-1:
[4,2,7,1,3]
2
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
    TreeNode* getSubTree(TreeNode* root, int val){
        if(root == NULL)
            return root;
        if(root->val == val)
            return root;
        
        TreeNode* tmpNode = getSubTree(root->left, val);
        if(tmpNode)
            return tmpNode;
        
        tmpNode = getSubTree(root->right, val);
        return tmpNode;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return getSubTree(root, val);
    }
};