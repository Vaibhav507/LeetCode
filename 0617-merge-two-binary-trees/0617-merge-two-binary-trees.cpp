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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        if(!root1)
            return root2;
        if(!root2)
            return root1;
        
        root2->val=root2->val+root1->val;
        
        root2->left=mergeTrees(root2->left,root1->left);
        root2->right=mergeTrees(root2->right,root1->right);
        
        return root2;
    }
};