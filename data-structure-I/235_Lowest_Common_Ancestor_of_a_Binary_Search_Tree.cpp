/*
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

Test Case-1:
[6,2,8,0,4,7,9,null,null,3,5]
2
4
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool findAncestor(TreeNode* root, TreeNode* common, vector<TreeNode*> &retVect){
        if(root == NULL)
            return false;
        retVect.push_back(root);
        if(root == common)
            return true;
        if(findAncestor(root->left, common, retVect) || findAncestor(root->right, common, retVect))
            return true;
        
        retVect.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pNodeVect, qNodeVect;
        findAncestor(root, p, pNodeVect);
        findAncestor(root, q, qNodeVect);
        int vectSize = pNodeVect.size() < qNodeVect.size() ? pNodeVect.size() : qNodeVect.size();
        TreeNode* tmpNode;
        for(int i=0;i<vectSize; i++){
            if(pNodeVect[i] == qNodeVect[i]){
                tmpNode = pNodeVect[i];
            }else{
                return tmpNode;
            }
        }
        return tmpNode;
    }
};