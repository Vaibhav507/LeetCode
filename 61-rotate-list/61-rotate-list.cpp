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
 ListNode* rotateRight(ListNode* head, int k) {
 if(head == NULL || head->next == NULL)
                return head;
            // Finding length of linked list
           ListNode* tmp = head;
           int len = 1;
           while(tmp->next) {
               tmp = tmp->next;
               len++;
           }
           
           //making the linked list circular
           tmp->next = head;
           k = k%len; //rotating only after multiples of k
           k = len-k; 
        
           while(k--)
               tmp = tmp->next;
           
           //make this as head node and break the connection
           head = tmp->next;
           tmp->next = NULL;
        
            return head;
    }
};