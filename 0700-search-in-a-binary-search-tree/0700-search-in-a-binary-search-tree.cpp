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
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        TreeNode* r;
        if(!root)
            return r;
        if(root->val==val)
            r=root;
        if(root->val<val)
            r=searchBST(root->right,val);
        if(root->val>val)
            r =searchBST(root->left,val);
        return r;
    }
};