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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        ListNode *temp3=NULL;
        ListNode *head=list1;
        int i=0;
        while(i!=a && temp1!=NULL){
            temp3=temp1;
            temp1=temp1->next;
            i++;
        }
        while(i<=b && temp1!=NULL){
            temp1=temp1->next;
            i++;
        }
        temp3->next=temp2;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp1;
        return head;

        
        
    }
};