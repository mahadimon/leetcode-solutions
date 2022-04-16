/*
https://leetcode.com/problems/validate-binary-search-tree/

Test Case-1:
[5,4,6,null,null,8,7]

Test Case-2:
[2,1,3]

Test Case-3:
[32,26,47,19,null,null,56,null,27]

Test Case-4:
[2,2,2]

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
    void doInorder(TreeNode* root, vector<int> &retVect){
        if(!root)
          return;  
        doInorder(root->left, retVect);
        retVect.push_back(root->val);
        doInorder(root->right, retVect);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> treeVect;
        doInorder(root, treeVect);
        vector<int> tmpVect = treeVect;
        sort(tmpVect.begin(), tmpVect.end());
        tmpVect.erase(unique(tmpVect.begin(), tmpVect.end()), tmpVect.end());
        if(tmpVect.size() != treeVect.size())
            return false;
        for(int i=0; i< tmpVect.size(); i++){
            if(tmpVect[i] != treeVect[i]){
                return false;
            }
        }
        return true;
    }
};