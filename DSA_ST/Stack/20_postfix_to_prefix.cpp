#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
    public:
      string postToPre(string post_exp) {
          // Write your code here
          int n = post_exp.size();
          stack<string> st;
          
          for(char ch: post_exp) {
              // operand
              if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                  st.push(string(1, ch));
              }
              else {
                  string t1 = st.top(); st.pop();
                  string t2 = st.top(); st.pop();
                  
                  string str = ch + t2 + t1;
                  st.push(str);
              }
          }
          return st.top();
      }
  };