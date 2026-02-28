class myStack {
  public:
  int *arr;
  int capacity;
  int top;
    myStack(int n) {
        capacity=n;
        arr=new int[n];
        top=-1;
        
        
    }

    bool isEmpty() {
        return top==-1;
}
    bool isFull() {
        return top==capacity-1;
    }

    void push(int x) {
        
        if(isFull())return;
        top=top+1;
        arr[top]=x;
    }

    void pop() {
        if(isEmpty())return;
        top=top-1;
    }

    int peek() {
        if(isEmpty())return  -1;
        return arr[top];
    }
};