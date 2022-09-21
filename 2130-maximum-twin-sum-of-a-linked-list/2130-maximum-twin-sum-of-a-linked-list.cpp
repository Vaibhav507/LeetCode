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
    int pairSum(ListNode* head) 
    {
        vector<int> arr;
        int max_amt=0,sum;
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            arr.push_back(ptr->val);
            ptr=ptr->next;
        }
        int i=0,j=arr.size()-1;
        while(i<=j)
        {
            sum=arr[i]+arr[j];
            max_amt=max(max_amt,sum);
            i++;
            j--;
        }
        return max_amt;
    }
};