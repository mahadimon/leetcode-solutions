/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/

Test Case-1:
[3,9,20,null,null,15,7,4,5,null,null]
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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
        if(lDepth > rDepth)
            return lDepth+1;
        return rDepth+1;
    }
};