#include <bits/stdc++.h>
using namespace std;



class Solution {
    public:
      string postToInfix(string exp) {
          // Write your code here
          int n = exp.size();
          stack<string> st;
          
          for(int i = 0; i < n; i++) {
              char ch = exp[i];
              
              // operand
              if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                  st.push(string(1, ch));
              }
              else {
                  string t1 = st.top(); st.pop();
                  string t2 = st.top(); st.pop();
                  
                  string str = '(' + t2 + ch + t1 + ')';
                  st.push(str);
              }
          }
          return st.top();
      }
  };