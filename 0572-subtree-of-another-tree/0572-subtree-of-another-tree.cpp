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
       bool kyasame(TreeNode *s, TreeNode *t)
    {
        if (!s && !t) return true; // dono null haii true kardooo
        if (!s || !t) return false; // ek null aur dusra nhi false kardo return
        if (s->val != t->val) return false;  // value same nhi false kardo return 
        
        return kyasame(s->left, t->left) && kyasame(s->right, t->right);
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // simple se funda haiiii mujhe har ek node ko dekhna haiii matlab ya to left se koii aisa subtree mil jaaye ya right seeeeee mil jaaye jisme pura subroot ho pura matlab pura hota haiiiii aisa nhi koiii chut jaaye
        // chalo iska code likhooo pehle
        if(!root)
            return false;
        if(kyasame(root,subRoot))
            return true;
        
        
        
        
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
    //agar ekk bhi true hoga toh true kardooo return     
    }
    
    
};