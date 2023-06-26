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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(count<k){
             fast=fast->next;
            count++;
        }
        
        while(fast){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=head;
        count=1;
        while(count<k){
            temp=temp->next;
            count++;
        }
        swap(slow->val, temp->val);
        return head;
    }
};