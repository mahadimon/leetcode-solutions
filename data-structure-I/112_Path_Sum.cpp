/*
https://leetcode.com/problems/path-sum/

Test Case-1:
[5,4,8,11,null,13,4,7,2,null,null,null,1]
22
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
    bool getMatch(TreeNode* root, int sum, int targetSum){
        if(root == NULL)
            return false;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            return sum == targetSum;
        }
        return getMatch(root->left, sum, targetSum) || getMatch(root->right, sum, targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return getMatch(root, 0, targetSum);
    }
};