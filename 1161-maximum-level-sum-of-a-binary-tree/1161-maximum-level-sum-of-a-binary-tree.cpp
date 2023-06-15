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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(!root)
            return ans;
        
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
        
        return ans;
    }
    
    int maxLevelSum(TreeNode* root) 
    {
        vector<vector<int>> list;
        int sum=0;
        vector<int> totalsum;
        int max=INT_MIN,maxit;
        list = levelOrder(root);
        for(int i=0;i<list.size();i++)
        {
            for(int j=0;j<list[i].size();j++)
                sum=sum+list[i][j];
            totalsum.push_back(sum);
            sum=0;
        }
        for(int i=0;i<totalsum.size();i++)
        {
            if(max<totalsum[i])
            {
                max=totalsum[i];
                maxit=i;
            }
        }
        return maxit+1;
    }
};