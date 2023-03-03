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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode *a=new ListNode(0), *head= new ListNode(0);
        int flag =0;
        if (l1==NULL && l2==NULL){
            return NULL;
        }
        else if(l1==NULL){
            return l2;
        } 
        else if (l2== NULL)return l1;
        
        while(l2  && l1){
            if(l1->val < l2-> val){
                if(flag==0){
                    head=l1;
                    a=head;

                }
                else{
                    a->next=l1;
                    a=a->next;

                
                }
                l1=l1->next;
            }     
            else{
                if (flag==0){
                    head=l2;
                    a=head;

                }
                else{
                    a->next=l2;
                    a=a->next;
                }
                l2=l2->next;
            }  
            flag++;
        }
        while(l1 !=NULL){
            a->next=l1;
            a=a->next;
            l1=l1->next;
        }
        while(l2 !=NULL){
            a->next=l2;
            a=a->next;
            l2=l2->next;
         }
        
    return head;
    }
};

