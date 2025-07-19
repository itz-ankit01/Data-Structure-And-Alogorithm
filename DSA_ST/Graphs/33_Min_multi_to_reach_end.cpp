#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
    public:
      int minimumMultiplications(vector<int>& arr, int start, int end) {
          
          queue<pair<int, int>> q;
          vector<int> dist(100000, 1e9);
          q.push({start, 0});
          
          dist[start] = 0;
          
          if(start == end ) return 0;
          
          while(!q.empty()) {
              int num = q.front().first;
              int steps = q.front().second;
              
              q.pop();
              
              for(auto it: arr) {
                  int newNum = (it * num) % 100000;
                  if(1 + steps < dist[newNum]) {
                      dist[newNum] = steps + 1;
                      if(newNum == end) return steps + 1;
                      q.push({newNum, steps + 1});
                  }
              }
          }
          return -1;
      }
  };
  