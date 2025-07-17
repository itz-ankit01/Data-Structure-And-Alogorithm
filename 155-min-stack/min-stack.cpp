class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        mini = LLONG_MAX;
    }
    
    void push(int val) {
        long long el = val;
        if(st.empty()) {
            st.push(el);
            mini = el;
        } else {
            if(el < mini) {
                st.push(2LL * el - mini);
                mini = el;
            } else {
                st.push(el);
            }
        }
    }
    
    void pop() {
        long long el = st.top();
        st.pop();
        if(el < mini) {
            mini = 2LL * mini - el;
        }
    }
    
    int top() {
        long long el = st.top();
        if(el < mini) return mini;
        return el;
    }
    
    int getMin() {
        return mini;
    }
};
