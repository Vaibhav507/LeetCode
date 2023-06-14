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
    vector<int> arr;
    
    void traversal(TreeNode* node)
    {
        if(!node)
            return;
        
        
        traversal(node->left);
        arr.push_back(node->val);
        traversal(node->right);
    }
    
    int getMinimumDifference(TreeNode* root) 
    {
        int temp;
        int mindiff=INT_MAX;
        traversal(root);
        for(int i=1;i<arr.size();i++)
        {
            mindiff=min(mindiff,(arr[i]-arr[i-1]));
        }
        return mindiff;
    }
};