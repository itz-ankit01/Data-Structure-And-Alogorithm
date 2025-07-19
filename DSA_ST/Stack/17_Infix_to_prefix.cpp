#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string infixToPrefix(const string& s) {
        // Your code goes here
        int n = s.size();
        stack<char> st;
        string ans = "";

        map<char, int> priority;
        priority['^'] = 3;
        priority['*'] = 2;
        priority['/'] = 2;
        priority['-'] = 1;
        priority['+'] = 1;

        string str = s;

        reverse(str.begin(), str.end());

        for(int i = 0; i < n; i++) {
            if(str[i] == '(') str[i] = ')';
            else if(str[i] == ')') str[i] = '(';
        }

        for(int i = 0; i < n; i++) {
            char ch = str[i];

            // operand
            if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                ans += ch;
            }
            else if(ch == '(') {
                st.push(ch);
            }
            else if(ch == ')') {
                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }

            // operator
            else {
                if(ch == '^') {
                    while(!st.empty() && priority[ch] <= priority[st.top()]) {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
                else {
                    while(!st.empty() && priority[ch] < priority[st.top()]) {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};