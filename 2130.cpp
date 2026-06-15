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
ListNode *reverse(ListNode *head){
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
    int pairSum(ListNode* head) {
        int t=0;
        ListNode *curr=head;
        while(curr){
            t++;
            curr=curr->next;
        }
        ListNode *copyhead=NULL,*tail=NULL;
        curr=head;
        while(curr){
            ListNode *newnode=new ListNode(curr->val);
            if(copyhead==NULL){
                copyhead=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
            curr=curr->next;
        }
        ListNode *reversal=reverse(copyhead);
        ListNode *maini=head;
        int h=t/2;
        int k=0;
        int maxi=INT_MIN;
        while(k<h){
            int s=reversal->val+maini->val;
            maxi=max(s,maxi);
            reversal=reversal->next;
            maini=maini->next;
            k++;
        }
        return maxi;
        
    }
};