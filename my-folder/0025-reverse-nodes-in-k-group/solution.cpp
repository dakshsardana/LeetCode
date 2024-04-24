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
    int lengthLL(ListNode* head) {
        int ans = 0;
        while (head != NULL) {
            head = head->next;
            ans++;
            
        }
        return ans;
    }
    void reverseLL(ListNode* &head) {
        ListNode* c, *p, *n;
        c = head;
        p = NULL;
        while (c != NULL) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        // swap(head, tail);
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 || head== NULL) return head;
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        int len=lengthLL(head);
        ListNode *prev=dummy,*hd,*td,*n;
        n=head;
        while(len>=k){
            hd=n;
            td=hd;
            for(int i=0;i<k-1;i++){
                td=td->next;
            }
            n=td->next;
            td->next=NULL;
            reverseLL(hd);
            prev->next=td;
            hd->next=n;
            prev=hd;
            len-=k;
        }
        return dummy->next;
    }
};
