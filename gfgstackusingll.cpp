/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

    Node *ll;

  public:
    myStack() {
        
        ll=NULL;
        
      
    }

    bool isEmpty() {
        return ll==NULL;
    }

    void push(int x) {
       
       Node *temp=new Node(x);
       temp->next=ll;
       ll=temp;

        
    }

    void pop() {
        if(ll==NULL)return;
        Node *temp=ll;
        ll=temp->next;
        delete(temp);
       
    }

    int peek() {
        if(ll==NULL)return -1;
        return ll->data;
       
        
    }

    int size() {
        Node *temp=ll;
        int s=0;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
        return s;
    }
};