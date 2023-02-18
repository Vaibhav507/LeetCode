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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev= NULL;
        ListNode* curr= head;
        while (curr)
        {
            ListNode* forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }
    
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        ListNode* answer = new ListNode(0);
        ListNode* finalAnswer = answer;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int sum = carry;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            answer->next = new ListNode(sum%10);
            answer = answer->next;
            carry = sum / 10;
        }
        if(carry)
        {
            answer->next = new ListNode(carry);
        }
        return finalAnswer->next;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        l1= reverse(l1);
        l2= reverse(l2);
        ListNode* ans= add(l1,l2);
        ans= reverse(ans);
        return ans;
    }
};