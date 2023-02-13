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
    TreeNode* maximum(vector<int> a,int l,int r)
    {
        if(l>r)
            return NULL;
        
        int max_i=a[l];
        int id=l;
        for(int i=l;i<=r;i++)
        {
            if(max_i<a[i])
            {
                id=i;
                max_i=a[i];
            }
                
        }
        TreeNode* root = new TreeNode(max_i);
        root->left = maximum(a,l,id-1);
        root->right = maximum(a,id+1,r);
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        return maximum(nums,0,nums.size()-1);
    }
};