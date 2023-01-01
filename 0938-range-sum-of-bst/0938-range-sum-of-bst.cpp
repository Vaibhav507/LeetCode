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
    vector<int> a;
    void traverse(TreeNode* root,vector<int>& a)
    {
        if(!root)
            return ;
        a.push_back(root->val);
        traverse(root->left,a);
        traverse(root->right,a);
    }
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        int sum=0;
        traverse(root,a);
        for(int i=0;i<a.size();i++)
            if(a[i]>=low && a[i]<=high)
                sum+=a[i];
        return sum;
    }
};