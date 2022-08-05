/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int count=0;
    ListNode * t1=headA;
    ListNode * t2=headB;
    for (t1; t1!=NULL;t1=t1->next)
    {
        for (t2; t2!=NULL; t2=t2->next)
        {
            if (t1==t2)
            {
                count+=1;
                break;
            }
        }
        t2=headB;
        if (count==1)
        {
            break;
        }
    }
    if (count==0)
    {
        return NULL;
    }
    else
    {
        return t1;
    }
}
};