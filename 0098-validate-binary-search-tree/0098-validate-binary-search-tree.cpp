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
    bool helper(TreeNode* root,long low,long high)
    {
        if(!root)
            return true;
        if(root->val>=high || root->val<=low)
            return false;
        
        return helper(root->right,root->val,high) && helper(root->left,low,root->val);
    }
    bool isValidBST(TreeNode* root) 
    {    
        return helper(root,LONG_MIN,LONG_MAX);
    }
};