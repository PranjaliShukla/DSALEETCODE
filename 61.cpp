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
ListNode *reversel(ListNode *head){
    ListNode *prev=NULL;
    ListNode *curr=head;
    while(curr){
        ListNode *nn=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nn;

    }
    return prev;
}
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp=head;
         int n=0;
         if(head==NULL || head->next==NULL){
            return head;
        }

        while(temp){
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        
        ListNode *reversal=reversel(head);
        ListNode *head1=NULL,*tail=NULL;
       
        int i=0;    
        while(i<k){
            ListNode *nextnode=reversal->next;
            if(head1==NULL){
                head1=reversal;
                tail=reversal;
            }
            else{
                tail->next=reversal;
                tail=reversal;
            }
            tail->next=NULL;
            reversal=nextnode;
            i++;
        }
        ListNode *second=reversal;
        ListNode *reverse1=reversel(head1);
        
        ListNode *reverse2=reversel(second);
        ListNode *ans=reverse1;
        while(ans->next){
            ans=ans->next;
        }
        ans->next=reverse2;
        return reverse1;

        
    }
};