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
    int maxLevelSum(TreeNode* root) 
    {
        queue<TreeNode*> q;
        int sum=0;
        int lev=1;
        int currlev=1;
        int max=INT_MIN;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> a;
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                sum=sum+node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(max<sum)
            {
                lev=currlev;
                max=sum;
            }
            sum=0;
            currlev++;
        }
        return lev;
    }
};