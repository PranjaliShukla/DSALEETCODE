/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        int i=1;
        Node *temp=head;
        if(x==1){
            head=head->next;
            return head;
        }
        while(i!=x-1){
            temp=temp->next;
            i++;
            
            
        }
        temp->next=temp->next->next;
        return head;
        
        
    }
};