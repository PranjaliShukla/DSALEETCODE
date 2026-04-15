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
        ListNode *temp=head;
        int t=0;
        while(temp){
             temp=temp->next;
             t++;
            
        }
        if(n==t){
            return head->next;
        }
        int l=t-n;
        ListNode *temp2=head;
        int k=1;
        while(k<l){
            temp2=temp2->next;
            k++;
        }
        temp2->next=temp2->next->next;
        return head;

        
    }
};