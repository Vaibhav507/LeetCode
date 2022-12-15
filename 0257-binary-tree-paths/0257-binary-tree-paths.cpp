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
    bool isleaf(TreeNode* root)
    {
        if(!root) return false;
        if(root->right==NULL && root->left==NULL) return true;
        return false;
    }

    void big(TreeNode* root,vector<string> &a,vector<int> path)
    {
        if(!root) return ;
        path.push_back(root->val);
        if(isleaf(root))
        {
            string str="";
            for(int i=0;i<path.size();i++)
            str=str + to_string(path[i]) + "->";
            str.pop_back();
            str.pop_back();
            a.push_back(str);
        }
        
        big(root->left,a,path);
        big(root->right,a,path);
    }
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> a;
        vector<int> path;
        if(!root) return a;
        big(root,a,path);
        
        return a;
    }
};