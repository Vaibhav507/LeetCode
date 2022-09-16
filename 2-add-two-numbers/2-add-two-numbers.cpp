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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *ptr1=l1;
        ListNode *ptr2=l2;
        ListNode* temp=new ListNode(1);

        int p2=0,p1=0;
        
       while(ptr2->next!=NULL)
       {
           ptr2=ptr2->next;
           p2++;
       }
        
        while(ptr1->next!=NULL)
       {
           ptr1=ptr1->next;
           p1++;
       }
        
        ptr2=l2;
        ptr1=l1;
        
        if(p2>=p1)
        {
            while(ptr1!=NULL)
        {
            (ptr2->val)=(ptr1->val)+(ptr2->val);
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
            ptr2=l2;
            while(ptr2->next!=NULL)
            {
                if((ptr2->val)>=10)
                {
                    ptr2->val=ptr2->val-10;
                    ((ptr2->next)->val)++;
                }
                ptr2=ptr2->next;
            }
            if((ptr2->val)>=10)
            {
                ptr2->val=ptr2->val-10;
                ptr2->next=temp;
            }
            return l2;
        }
        
        
        
        if(p1>p2)
        {
            while(ptr2!=NULL)
            {
                (ptr1->val)=(ptr2->val)+(ptr1->val);
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            ptr1=l1;
            while(ptr1->next!=NULL)
            {
                if((ptr1->val)>=10)
                {
                    ptr1->val=ptr1->val-10;
                    ((ptr1->next)->val)++;
                }
                ptr1=ptr1->next;
            }
            if((ptr1->val)>=10)
            {
                ptr1->val=ptr1->val-10;
                ptr1->next=temp;
            }
            return l1; 
        }
        
        return {};
    }
};