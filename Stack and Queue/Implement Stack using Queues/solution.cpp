class MyStack {
public:
    queue<int>st;
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        for(int i=0 ;i<st.size()-1 ;i++)
        {
            if(!st.empty())
            {
            st.push(st.front());
            st.pop();
            }
        }


        
    }
    
    int pop() {
        int popped;
        if(!(st.empty()))
        {
            popped = st.front();
            st.pop();
        }
        return popped;
        
    }
    
    int top() {
        if(!(st.empty()))
        {
            return st.front();
        }
        return 0;
        
    }
    
    bool empty() {
        if(!(st.empty()))
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
