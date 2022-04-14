/*
https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    void doPostOrder(TreeNode* root, vector<int>* storeData){
        if(root == NULL)
            return;
        doPostOrder(root->left, storeData);
        doPostOrder(root->right, storeData);
        storeData->push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> retVect;
        doPostOrder(root, &retVect);
        return retVect;
    }
};