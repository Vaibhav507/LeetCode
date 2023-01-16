/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> a;
    void traverse(Node* root)
    {
        for(int i=0;i<root->children.size();i++)
            traverse(root->children[i]);
        a.push_back(root->val);
            
    }
    vector<int> postorder(Node* root) 
    {
        if(!root)
            return a;
        traverse(root);
        return a;
    }
};