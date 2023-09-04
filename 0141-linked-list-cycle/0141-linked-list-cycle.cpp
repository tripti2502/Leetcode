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
    bool hasCycle(ListNode *iList) {
        auto a=iList,b=iList;
        if (a==NULL or a->next==NULL)
            return false;

        a=a->next;
        b=b->next->next;

        while ((a!=b) && a && b)
        {
            a=a->next;
            if(b->next==NULL)
                return false;
            b=b->next->next;
        }

        return a==b;
    }
};