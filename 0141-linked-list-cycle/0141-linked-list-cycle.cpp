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
    bool hasCycle(ListNode *h) {
//         auto a=iList,b=iList;
//         if (a==NULL or a->next==NULL)
//             return false;

//         a=a->next;
//         b=b->next->next;

//         while ((a!=b) && a && b)
//         {
//             a=a->next;
//             if(b->next==NULL)
//                 return false;
//             b=b->next->next;
//         }

//         return a==b;
        
        unordered_set<ListNode*> s;
    while (h != NULL) {
        // If this node is already present in hashmap it means there is a cycle
    
        if (s.find(h) != s.end())
            return true;
        // If we are seeing the node for the first time, insert it in hash
        s.insert(h);
        h = h->next;
    }
    return false;

    }
};