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
    int answer=0;
    void solve(TreeNode* root,int val)
    {
        if(!root)
            return ;
        val=val*10 + root->val;
        
        if(!root->left && !root->right)
        {
            answer+=val;
            return;
        }
        solve(root->left,val);
        solve(root->right,val);
        
    }
    
    int sumNumbers(TreeNode* root) 
    {
        answer=0;
        solve(root,0);
        return answer;
    }
};