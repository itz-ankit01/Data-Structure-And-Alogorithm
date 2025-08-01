class MyQueue {
    stack<int> st1, st2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        // step 1: st1 -> st2
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }

        // step 2 -> st1 <- x;
        st1.push(x);

        // step3 -> st2 -> st1
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }

    }
    
    int pop() {
        int x = st1.top();
        st1.pop();
        return x;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
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