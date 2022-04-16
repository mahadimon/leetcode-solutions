/*
https://leetcode.com/problems/insert-into-a-binary-search-tree/

Test Case-1:
[4,2,7,1,3]
5

Test Case-2:
[]
5
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
    TreeNode* newNode(int val){
        TreeNode* newNode = new TreeNode(val);
        return newNode;
    }
    void doInsert(TreeNode* root, int val){
        if(root->left == NULL && root->val > val){
            root->left = newNode(val);
            return;
        }
        if(root->right == NULL && root->val < val){
            root->right = newNode(val);
            return;
        }
        if(root->val > val){
            doInsert(root->left, val);
        }else{
            doInsert(root->right, val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            root = newNode(val);
            return root;
        }
        doInsert(root, val);
        return root;
    }
};