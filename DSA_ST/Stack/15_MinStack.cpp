#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int,int>> st;
public:

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) {
            st.push({val, val});
        } else {
            int el = st.top().second;
            st.push({val, min(el, val)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        int x = st.top().first;
        return x;
    }
    
    int getMin() {
        return st.top().second;
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
