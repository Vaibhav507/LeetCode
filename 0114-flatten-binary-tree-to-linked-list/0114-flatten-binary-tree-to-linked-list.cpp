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
    vector<TreeNode*> ans;
    void traverse(TreeNode *root)
    {
        if(!root)
            return ;
        ans.push_back(root);
        traverse(root->left);
        traverse(root->right);
        
    }
    void flatten(TreeNode* root)
    {
        if(!root)
            return ;
        traverse(root);
        for(int i=0;i<ans.size()-1;i++)
        {
            ans[i] -> right = ans[i+1];
            ans[i] -> left = NULL;
        }
    }
};