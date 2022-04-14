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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> retVect;
        stack<TreeNode*> treeStack;
        while(!treeStack.empty() || root != NULL){
            while(root != NULL){
                retVect.push_back(root->val);
                if(root->right != NULL)
                    treeStack.push(root->right);
                root = root->left;
            }
            
            if(!treeStack.empty()){
                root = treeStack.top();
                treeStack.pop();
            }
        }
        return retVect;
    }
};