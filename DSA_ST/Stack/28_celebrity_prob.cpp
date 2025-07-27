#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int celebrity(vector<vector<int> >& mat) {
          // code here
          int ans = 0;
          vector<int> v;
          int n = mat.size();
          for(int i = 0; i < n; i++) {
              bool flag = true;
              ans = i;
              for(int j = 0; j < n; j++) {
                  if(i != j && mat[i][j] == 1) {
                      flag = false;
                      break;
                  }
              }
              if(flag) v.push_back(ans); 
          }
          for(int i = 0; i < v.size(); i++) {
              ans = v[i];
              bool flag = true;
              for(int j = 0; j < n; j++) {
                  if(mat[j][v[i]] == 0 && v[i] != j) {
                      flag = false;
                      break;
                  }
              }
              if(flag)return ans;
          }
          
          return -1;
      }
  };

// -----------------------------------------------

class Solution {
    public:
      int celebrity(vector<vector<int> >& mat) {
          // code here
          int n = mat.size();
          int top = 0, down = n-1;
          while(top < down) {
              if(mat[top][down] == 1) {
                  top++;
              }
              else if(mat[down][top] == 1) {
                  down--;
              }
              else {
                  top++;
                  down--;
              }
          }
          
          if(top > down) return -1;
          
          for(int i = 0; i < n; i++) {
              if(i == top) continue;
              if(mat[top][i] == 0 && mat[i][top] == 1) {
                  
              } 
              else return -1;
          }
          return top;
      }
  };