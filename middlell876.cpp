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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode *temp=head;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        int mid=c/2;
        ListNode *temp1=head;
        int k=0;
        while(temp1!=NULL && k<mid){
            temp1=temp1->next;
            k++;


        }
        return temp1;

        
    }
};