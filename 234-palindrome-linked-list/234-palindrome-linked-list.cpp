/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        vector<int> normal;
        vector<int> reversal;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            normal.push_back(ptr->val);
            reversal.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(normal.begin(),normal.end());
        if(reversal==normal)
            return true;
        else
            return false;
    }
};