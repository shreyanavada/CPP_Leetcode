class MinStack {
    stack<int>st;
    stack<int>to_track_min;
public:
    MinStack() {
        
        
    }
    
    void push(int val) {
        if(empty(to_track_min) && empty(st))
        {
            st.push(val);
            to_track_min.push(val);
        }
        else
        {
            st.push(val);
            if(st.top() <= to_track_min.top())
            {
                to_track_min.push(st.top());
            }
            else
            {
                to_track_min.push(to_track_min.top());
            }
        }

        
    }
    
    void pop() {
        st.pop();
        to_track_min.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return to_track_min.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
