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
    ListNode* mergeNodes(ListNode* head) 
    {
        int sum=0;
        ListNode* ptr1=head;
        ListNode* ptr2=new ListNode();
        ListNode* ptr3=ptr2;
        ptr1=ptr1->next;
        while(ptr1)
        {
            
            if(ptr1->val==0)
            {
                ptr3->next=new ListNode(sum);
                ptr3=ptr3->next;
                sum=0;
            }
            sum+=ptr1->val;
            ptr1=ptr1->next;
        }
        return ptr2->next;
    }
};