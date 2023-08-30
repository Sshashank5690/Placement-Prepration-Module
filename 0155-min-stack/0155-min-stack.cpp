class MinStack {
public:
    stack<int> st,stmin;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stmin.empty() || val <= stmin.top()){
            stmin.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top() == stmin.top()){
            stmin.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stmin.top();
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