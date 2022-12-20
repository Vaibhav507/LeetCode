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
    void traverse(TreeNode* root,vector<int> &a)
    {
        if(!root)
            return ;
        
        a.push_back(root->val);
        traverse(root->left,a);
        traverse(root->right,a);
    }

    int findSecondMinimumValue(TreeNode* root)
    {
        if(!root) 
            return -1;
    
        vector<int> ans;
        traverse(root,ans);
        
        sort(ans.begin(),ans.end());
        
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        
        
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        
        if(ans.size()==1)
            return -1;

        return ans[1];
    }
};