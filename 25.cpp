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
ListNode *reversal(ListNode *head){
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
ListNode *kth(ListNode *head,int k){ 
    while(head && --k){
        head=head->next;
    }
    return head;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prevt=NULL;
        ListNode *nn=NULL;
        while(temp){
            ListNode *kNode=kth(temp,k);
            if(kNode==NULL){
                if(prevt){
                    prevt->next=temp;
                }
                break;
            }
            
            nn=kNode->next;
            kNode->next=NULL;
            ListNode *re=reversal(temp);
            if(temp==head){
                head=re;
            }
            else{
                prevt->next=re;


            }

            prevt=temp;
            temp=nn;

        
        



        
    }
    return head;
    }
};