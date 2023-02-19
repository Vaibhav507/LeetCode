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
    int findBottomLeftValue(TreeNode* root) 
    {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(!root)
            return root->val;
        
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> a;
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                a.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            ans.push_back(a);
        }
        int sz = ans.size();
        return ans[sz-1][0];
    }
};