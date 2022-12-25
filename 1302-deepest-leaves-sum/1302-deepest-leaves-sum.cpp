
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
    pair<int,int> ans = {0, INT_MIN};

    bool isleaf(TreeNode* root)
    {
        return !root->left && !root->right;
    }

    int sum = 0;

    void traverse(TreeNode* node, int level)
    {
        if(!node)    return;

        if(isleaf(node)) 
        {
            if(ans.first < level) 
            {
                ans.first = level;
                ans.second = node->val;
            }
            else if(ans.first == level) ans.second += node->val;

            return;
        }
        traverse(node->left, level + 1);
        traverse(node->right, level + 1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        traverse(root, 1);

        root->left = root->right = NULL;

        return ans.second;
    }
};
