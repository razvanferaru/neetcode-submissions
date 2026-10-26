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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h1 = head;
        int sz = 0;
        while (h1){
            h1 = h1->next;
            sz++;
        }
        int removeIndex = sz-n;
        int index = 0;
        if(removeIndex == 0){
            return head->next;
        }
        h1 = head;
        for(int i=0; i<sz; ++i){
            if((i+1) == removeIndex){
                h1->next = h1->next->next;
                break;
            }
            h1 = h1->next;
        }
        return head;
    }
};
