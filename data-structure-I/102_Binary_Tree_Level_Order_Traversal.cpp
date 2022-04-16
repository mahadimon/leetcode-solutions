/*
https://leetcode.com/problems/binary-tree-level-order-traversal/

Test Case-1:
[3,9,20,null,null,15,7]
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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> retVecVect;
        queue<TreeNode*> q;
        if(root != NULL){
            q.push(root);
        }
        int totalCount = 1;
        while(!q.empty()){
            vector<int> innerVect;
            int childNodeCount = 0;
            while(totalCount--){
                TreeNode* tmpNode = q.front();
                innerVect.push_back(tmpNode->val);
                if(tmpNode->left != NULL){
                    q.push(tmpNode->left);
                    childNodeCount++;
                }
                if(tmpNode->right != NULL){
                    q.push(tmpNode->right);
                    childNodeCount++;
                } 
                q.pop();
            }
            totalCount = childNodeCount;
            retVecVect.push_back(innerVect);
        }
        return retVecVect;
    }
};