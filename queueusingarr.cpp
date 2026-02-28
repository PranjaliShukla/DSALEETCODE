class myQueue {

  public:
  int *arr;
  int capacity;
  int start;
  int end;
    myQueue(int n) {
        capacity=n;
        start=-1;
        end=-1;
        arr=new int[n];
    }

    bool isEmpty() {
        return (start==-1 && end==-1);
    }

    bool isFull() {
        return start==(end+1)%capacity;
    }

    void enqueue(int x) {
        if(isFull())return;
        if(isEmpty()){
            start=0;
            end=0;
        }
        else{
        end=(end+1)%capacity;
        }
        arr[end]=x;
    }

    void dequeue() {
        if(isEmpty())return;
        if(start==end){
            start=-1;
            end=-1;
        }
        else{
        start=start+1;
        }
    }

    int getFront() {
        if(isEmpty())return -1;
        return arr[start];
     
    }

    int getRear() {
        if(isEmpty())return -1;
        return arr[end];
        
    }
};