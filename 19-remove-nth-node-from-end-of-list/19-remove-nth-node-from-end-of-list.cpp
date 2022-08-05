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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* ptr=head;
        int a=0;
        while(ptr=(ptr->next))
            a++;
        cout<<a;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        int t=a-n;
            if(t>=0)
            {
                for(int i=0;i<t;i++)
                {
                    temp1=temp1->next;
                    temp=temp->next; 
                }
                temp->next=temp1->next;
            }
            else
            {
                for(int i=0;i<abs(t);i++)
                    head=head->next;
            }
        return head;
        
    }
};