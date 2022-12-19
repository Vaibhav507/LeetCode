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
    vector<int> traverse(TreeNode* root,vector<int> &a)
    {
        if(!root)
            return a;
        if(root->left==NULL && root->right==NULL)
            a.push_back(root->val);
        traverse(root->left,a);
        traverse(root->right,a);
        return a;
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> ans1,ans2;
        if(!root1 || !root2)
            return false;
        
        traverse(root1,ans1);
        traverse(root2,ans2);
        
        if(ans1 == ans2)
            return true;
        
    
        return false;
        
        
 
    }
};