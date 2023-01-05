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
    int number;
    int ans;
    bool isleaf(TreeNode* a){
        if(!a->left && !a->right)
            return true;
        return false;
    }
    void digits(TreeNode* a, int x){
        if(!a){
            number = x;
            return;
        }
        if(a->left == NULL && a->right==NULL)
            number += x;
        if(a->left != NULL) digits(a->left, 10*x + a->left->val);
        if(a->right != NULL) digits(a->right, 10*x + a->right->val);
    }
    int sumNumbers(TreeNode* root) {
        digits(root,root->val);
        return number;
    }
};