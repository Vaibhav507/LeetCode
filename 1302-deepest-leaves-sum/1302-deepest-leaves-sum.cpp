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
    
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
    
    void solve(TreeNode* root,int &ans,int i,int d)
    {
        if(!root)
            return ;
        
        if(root->left==NULL && root->right==NULL && i==d)
            ans=ans+root->val;
        
        solve(root->left,ans,i+1,d);
        solve(root->right,ans,i+1,d);
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int d = maxDepth(root);
        int ans = 0;
        solve(root,ans,1,d);
        return ans;
    }
};