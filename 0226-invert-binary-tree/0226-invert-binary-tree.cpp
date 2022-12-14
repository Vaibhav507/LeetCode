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
    bool isLeaf(TreeNode* root){
        if(root->left == NULL & root->right == NULL)
            return 1;
        return 0;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
        return 0;

        if(!isLeaf(root)){
            TreeNode* temp;
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};