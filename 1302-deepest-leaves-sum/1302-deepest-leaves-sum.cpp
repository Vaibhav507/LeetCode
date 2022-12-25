
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

    void traverse(TreeNode* root, int level,vector<pair<int,int>> &ans)
    {
        if(!root)    
            return;
        ans.push_back({root->val,level});
        traverse(root->left, level + 1,ans);
        traverse(root->right, level + 1,ans);
    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        int d = maxDepth(root);
        vector<pair<int,int>>  ans;
        int sum=0;
        traverse(root, 1,ans);
        for(int i=0;i<ans.size();i++)
            if(ans[i].second==d)
                sum=sum+ans[i].first;


        return sum;
    }
};
