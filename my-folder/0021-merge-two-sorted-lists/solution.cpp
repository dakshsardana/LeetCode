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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL) return b;
        if(b==NULL) return a;
        ListNode* newHead=NULL;
        if(a->val<b->val){
            newHead=a;
            newHead->next=mergeTwoLists(a->next,b);
        }
        else{
            newHead=b;
            newHead->next=mergeTwoLists(a,b->next);
        }
        return newHead;
    }
};
