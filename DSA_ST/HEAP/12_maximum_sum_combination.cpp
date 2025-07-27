#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
          
          sort(a.begin(), a.end());
          sort(b.begin(), b.end());
          
          int n = a.size();
          
          priority_queue<pair<int, pair<int, int>>> pq;
          set<pair<int, int>> vis;
          
          vector<int> ans;
          pq.push({a[n-1] + b[n-1], {n-1, n-1}});
          vis.insert({n-1, n-1});
          
          while(ans.size() < k) {
              auto it = pq.top();
              int sum = it.first;
              int i = it.second.first;
              int j = it.second.second;
              
              pq.pop();
              ans.push_back(sum);
              
              if(i-1>=0 && !vis.count({i-1, j})) {
                  pq.push({a[i-1]+b[j], {i-1, j}});
                  vis.insert({i-1, j});
              }
              
              if(j-1>=0 && !vis.count({i, j-1})) {
                  pq.push({a[i]+b[j-1], {i, j-1}});
                  vis.insert({i, j-1});
              }
          }
          return ans;
      }
  };