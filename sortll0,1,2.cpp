/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        Node *temp=head;
        vector<int>ans;
        while(temp){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        Node *head1=NULL,*tail=NULL;
        for(int i:ans){
            Node *temp2=new Node(i);
            if(head1==NULL){
                head1=temp2;
                tail=temp2;
            }
            else{
                tail->next=temp2;
                tail=temp2;
            }
        }
        return head1;
        
    }
};
//optimal solution 
/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        Node *temp=head;
        Node *ch1=NULL,*ct1=NULL;
        Node *ch2=NULL,*ct2=NULL;
        Node *ch3=NULL,*ct3=NULL;
        while(temp){
            Node *nn=temp->next;
            temp->next=NULL;
            if(temp->data==0){
                if(ch1==NULL){
                    ch1=temp;
                    ct1=temp;
                }
                else{
                    ct1->next=temp;
                    ct1=temp;
                    
                    
                }
            }
            else if(temp->data==1){
                if(ch2==NULL){
                    ch2=temp;
                    ct2=temp;
                }
                else{
                    ct2->next=temp;
                    ct2=temp;
                    
                    
                }
            }
            else if(temp->data==2){
                if(ch3==NULL){
                    ch3=temp;
                    ct3=temp;
                }
                else{
                    ct3->next=temp;
                    ct3=temp;
                    
                    
                }
            }
            temp=nn;
        }
        if(ct1){
            if(ch2){
                ct1->next=ch2;
            }
            else{
                ct1->next=ch3;
            }
        }
        if(ct2){
            ct2->next=ch3;
        }
        if(ch1)return ch1;
        if(ch2) return ch2;
        return ch3;
        
        
    }
};