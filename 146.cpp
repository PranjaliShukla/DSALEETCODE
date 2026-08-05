class LRUCache {
public:

class Node{
    public:
    int key;
    int val;
    Node *next;
    Node *prev;
    Node(int key,int val){
        this->key=key;
        this->val=val;
        next=NULL;
    prev=NULL;
    }
};
int capacity;
Node *tail;
Node *head;
unordered_map<int,Node*>mpp;

    LRUCache(int capacity) {
        this->capacity=capacity;
        mpp.clear();
        tail=new Node(-1,-1);
        head=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
        
    }
    void insertatbeg(Node *node){
    Node *cah=head->next;
    head->next=node;
    node->next=cah;
    node->prev=head;
    cah->prev=node;
    
}
void deleteNode(Node*node){
    Node *prevd=node->prev;
    Node *nn=node->next;
    prevd->next=nn;
    nn->prev=prevd;
}
    
    int get(int key) {
        if(mpp.find(key)==mpp.end()){
            return -1;
        }
        else{
            Node *node=mpp[key];
            deleteNode(node);
            insertatbeg(node);
            return node->val;
        }
        
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            Node *node=mpp[key];
            node->val=value;
            deleteNode(node);
            insertatbeg(node);
        }
        else{
            if(mpp.size()==capacity){
                Node *node=tail->prev;
                mpp.erase(node->key);
                deleteNode(node);
            }
            Node *newNode=new Node(key,value);
            mpp[key]=newNode;
            insertatbeg(newNode);
            

        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */