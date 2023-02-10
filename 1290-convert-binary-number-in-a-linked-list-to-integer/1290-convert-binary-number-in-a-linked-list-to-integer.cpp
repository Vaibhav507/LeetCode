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
    int getDecimalValue(ListNode* head) 
    {
        vector<int> a;
        int sum=0;
        ListNode *ptr=head;
        while(ptr)
        {
            a.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
            sum=sum+ a[i]*(1<<i);
        return sum;
    }
};