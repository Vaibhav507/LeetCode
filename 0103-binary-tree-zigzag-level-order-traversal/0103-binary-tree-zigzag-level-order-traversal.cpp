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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;
        q.push(root);
    
        vector<vector<int>> a;
    
        if(!root)
            return a;
    
        int cnt=0;
    
        while(!q.empty())
        {
            int n=q.size();
            vector<int> ans;
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                ans.push_back(node->val);
            }
            cnt++;
            if(cnt%2==0)
                reverse(ans.begin(),ans.end());

                a.push_back(ans);
        }
        return a;
    }
};