class MyQueue {
public:
    
    stack<int> input;
    stack<int> output;
    int peekEl =  -1;

    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty()){
            peekEl =  x; 
        }
       input.push(x); // har baar karna hi hai 
    }
    
    // amortized O(1) >> starting mai o(n) fir baad mai O(1) hojayegi TC
    int pop() {
        if(output.empty()){
            // input -> output O(n)>> input ko output mai daalo
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
          // yaha pe output is empty so direcr answer nikal denge peek pop etc
        int val = output.top();  // O(1)
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty()){  // agar output empty hai to peekEl mai jo value wo return kardo
            return peekEl;
        }
        return output.top();  // nahi toh output khali nahi hoga top pe jo hai wo return kardo
    }
    
    bool empty() {
        if(input.empty() && output.empty())
        return true;

        return false;
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