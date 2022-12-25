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
    int ans=0;
    int i=2;
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        if(!root)
            return 0;
        int d = maxDepth(root);
        if(d==1)
            return root->val;
        if(d-i==0)
        {
            if(root->left!=NULL) ans=ans+root->left->val;
            if(root->right!=NULL) ans=ans+root->right->val;
        }
            
        if(maxDepth(root->left)>maxDepth(root->right))
           deepestLeavesSum(root->left);
        if(maxDepth(root->left)<maxDepth(root->right))
           deepestLeavesSum(root->right);
        if(maxDepth(root->left)==maxDepth(root->right))
           {
              deepestLeavesSum(root->left);
              deepestLeavesSum(root->right);
           }
        return ans;
    }
};