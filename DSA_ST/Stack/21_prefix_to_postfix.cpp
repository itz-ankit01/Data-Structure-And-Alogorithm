#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
    public:
      string preToPost(string pre_exp) {
          int n = pre_exp.size();
          stack<string> st;
          for(int i = n-1; i >= 0; i--) {
              char ch = pre_exp[i];
              // operand
              if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                  st.push(string(1, ch));
              }
              else {
                  string t1 = st.top(); st.pop();
                  string t2 = st.top(); st.pop();
                  
                  string str = t1 + t2 + ch;
                  st.push(str);
              }
          }
          return st.top();
      }
  };