#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      string infixToPostfix(string& s) {
          int i = 0;
          int n = s.size();
          stack<char> st;
          string ans = "";
          
          map<char, int> mp;
          mp['^'] = 3;
          mp['*'] = 2;
          mp['/'] = 2;
          mp['-'] = 1;
          mp['+'] = 1;
          
          while(i < n) {
              // operand
              if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                  ans += s[i];
              }
              else if(s[i] == '(') {
                  st.push(s[i]);
              }
              else if(s[i] == ')') {
                  while(!st.empty() && st.top() != '(') {
                      ans = ans + st.top();
                      st.pop();
                  }
                  st.pop();
              }
              else {
                  
                  while(!st.empty() && mp[s[i]] <= mp[st.top()]) {
                      ans = ans + st.top();
                      st.pop();
                  }
                  st.push(s[i]);
              }
              i++;
          }
          
          while(!st.empty()) {
              ans = ans + st.top();
              st.pop();
          }
          return ans;
      }
  };
  