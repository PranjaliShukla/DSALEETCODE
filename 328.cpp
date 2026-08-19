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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
       
        ListNode *fast=head;
        ListNode *he=NULL,*tail=NULL;
        while(fast){
            ListNode *temp=new ListNode(fast->val);
            if(he==NULL){
                he=temp;
                tail=temp;

            }
            else{
                tail->next=temp;
                tail=temp;
            }
            if(fast->next){
            fast=fast->next->next;}
            else{
                break;
            }
        }
        ListNode *slow=head->next;
        while(slow){
            ListNode *temp2=new ListNode(slow->val);
            tail->next=temp2;
            tail=temp2;
            if(slow->next){
            slow=slow->next->next;}
            else{
                break;
            }
        }
        return he;


        
    }
};