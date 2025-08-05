#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
    public:
      int pageFaults(int N, int C, int pages[]) {
          // code here
          deque<int> q;
          
          int ans = 0;
          for(int i = 0; i < N; i++) {
              
              int page = pages[i];
              
              auto it = find(q.begin(), q.end(), page);
              
              if(it != q.end()) {
                  q.erase(it);
                  q.push_back(page);
              }
              else {
                  ans++;
                  if(q.size() < C) {
                      q.push_back(page);
                  }
                  else {
                      q.pop_front();
                      q.push_back(page);
                  }
              }
              
          }
          
          return ans;
      }
  };