/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node *slow=head;
        Node *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                int t=1;
                fast=fast->next;
                while(slow!=fast){
                    t++;
                    fast=fast->next;
                }
                return t;
            }
        }
        return 0;
        
        
        
        
        
        
        
    }
};