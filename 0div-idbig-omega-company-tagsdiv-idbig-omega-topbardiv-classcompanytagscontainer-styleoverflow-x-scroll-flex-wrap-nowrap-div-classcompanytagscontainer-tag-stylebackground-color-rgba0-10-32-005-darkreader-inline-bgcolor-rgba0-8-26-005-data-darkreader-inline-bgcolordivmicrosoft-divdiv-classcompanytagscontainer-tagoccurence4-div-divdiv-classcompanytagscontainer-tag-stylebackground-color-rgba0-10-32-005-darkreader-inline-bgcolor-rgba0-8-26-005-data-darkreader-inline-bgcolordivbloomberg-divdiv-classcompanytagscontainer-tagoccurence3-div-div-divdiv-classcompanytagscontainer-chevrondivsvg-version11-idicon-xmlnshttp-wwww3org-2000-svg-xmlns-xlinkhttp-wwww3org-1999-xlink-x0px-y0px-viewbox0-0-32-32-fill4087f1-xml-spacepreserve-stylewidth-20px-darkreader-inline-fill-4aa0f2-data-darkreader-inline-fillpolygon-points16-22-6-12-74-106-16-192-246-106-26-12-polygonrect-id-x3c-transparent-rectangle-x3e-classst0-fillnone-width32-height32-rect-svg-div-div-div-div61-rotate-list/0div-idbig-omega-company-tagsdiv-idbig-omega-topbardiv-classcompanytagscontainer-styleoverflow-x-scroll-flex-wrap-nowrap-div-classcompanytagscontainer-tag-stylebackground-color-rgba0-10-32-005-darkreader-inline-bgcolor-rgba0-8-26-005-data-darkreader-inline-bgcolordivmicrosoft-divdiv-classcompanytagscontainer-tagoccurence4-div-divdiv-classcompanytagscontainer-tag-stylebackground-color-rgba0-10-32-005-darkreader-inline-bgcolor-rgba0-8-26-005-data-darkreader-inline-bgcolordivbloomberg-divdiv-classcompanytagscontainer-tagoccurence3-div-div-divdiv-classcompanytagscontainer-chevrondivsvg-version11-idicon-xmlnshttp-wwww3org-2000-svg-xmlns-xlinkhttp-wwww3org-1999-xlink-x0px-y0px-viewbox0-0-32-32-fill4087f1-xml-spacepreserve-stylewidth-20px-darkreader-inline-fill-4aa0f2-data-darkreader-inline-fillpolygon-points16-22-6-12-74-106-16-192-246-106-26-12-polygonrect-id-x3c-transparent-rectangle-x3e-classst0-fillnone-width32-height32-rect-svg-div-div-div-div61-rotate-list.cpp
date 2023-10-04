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
        if(head==NULL || head->next==NULL || k==0)
            return head;
            ListNode* slow=head;
            ListNode* fast=head;
            int count=1;
            while(slow->next!=NULL)
            {
                slow=slow->next;
                count++;
            }
        k%=count;
        if(k==0) return head;
        slow=head;
        for(int i=1;i<=k;i++) 
        {
            if(fast->next)
            fast=fast->next;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* ans=slow->next;
        ListNode* temp=ans;
        slow->next=NULL;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=head;
        return ans;
    }
};