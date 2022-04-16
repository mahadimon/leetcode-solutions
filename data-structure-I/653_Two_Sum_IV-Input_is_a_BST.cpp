/*
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

Test Case-1:
[1]
2
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
    void createVector(TreeNode* root, vector<int>* numberVect){
        if(!root)
            return;
        createVector(root->left, numberVect);
        numberVect->push_back(root->val);
        createVector(root->right, numberVect);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> numberVect;
        vector<int>::iterator it;
        createVector(root, &numberVect);
        
        for(int i=0; i<numberVect.size(); i++){
            int remain = k - numberVect[i];
            it = find(numberVect.begin()+i+1, numberVect.end(), remain);
            if(it != numberVect.end())
                return true;
        }
        return false;
    }
};