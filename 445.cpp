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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=reversel(l1);
        ListNode *temp2=reversel(l2);
        ListNode *head=NULL;
        ListNode *tail=NULL;
        int carry=0;
        while(temp1 || temp2 || carry){
            int sum=carry;
            if(temp1){
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2){
                sum+=temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            ListNode *nn=new ListNode(sum%10);
            if(head==NULL){
                head=nn;
                tail=nn;
            }
            else{
                tail->next=nn;
                tail=nn;
            }

        }
        ListNode *ans=reversel(head);
        return ans;

        
    }
};