/*
https://leetcode.com/problems/binary-tree-preorder-traversal/

Test Case-1:
[3,1,2,4]
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
    void doPreOrder(TreeNode* root, vector<int>* storeData){
        if(root == NULL)
            return;
        storeData->push_back(root->val);
        doPreOrder(root->left, storeData);
        doPreOrder(root->right, storeData);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> retVect;
        doPreOrder(root, &retVect);
        return retVect;
    }
};