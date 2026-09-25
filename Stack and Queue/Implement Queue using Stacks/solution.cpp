class MyQueue {
    stack<int>st1;
    stack<int>st2;
    int size;
public:

    MyQueue() {
     size = 0;
    }
    
    void push(int x) {
        int n = st1.size();
        for(int i=0 ;i<n;i++)
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        n = st2.size();
        for(int i=0 ;i<n;i++)
        {
            st1.push(st2.top());
            st2.pop();
        }
        size++;
    }
    
    int pop() {
        
        if(size == 0)
        {
            return -1;
        }
        
        int popped = st1.top();
        st1.pop();
        size--;
        return popped;

    }
    
    int peek() {
        if(size == 0)
        {
            return -1;
        }
        return st1.top();
    }
    
    bool empty() {
        return size == 0 ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
