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
    ListNode* middleNode(ListNode* head)
    {
        ListNode* ptr=head;
        int l=0;
        while(ptr=ptr->next)
        {
            l++;   
        }
        cout<<l;
        if(l%2==0)
        {
            for(int i=0;i<(l/2);i++)
                head=head->next;
        }
        else
        {
            for(int i=0;i<((l/2)+1);i++)
                head=head->next;
        }
        return head;
        
    }
};