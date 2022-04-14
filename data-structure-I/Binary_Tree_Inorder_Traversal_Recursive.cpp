/*
https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    void doInOrder(TreeNode* root, vector<int>* storeData){
        if(root == NULL)
            return;
        doInOrder(root->left, storeData);
        storeData->push_back(root->val);
        doInOrder(root->right, storeData);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> retVect;
        doInOrder(root, &retVect);
        return retVect;
    }
};