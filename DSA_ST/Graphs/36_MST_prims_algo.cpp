#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
      int spanningTree(int V, vector<vector<int>> adj[]) {
          // {wt, node}
          priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
          
          pq.push({0, 0});
          
          int vis[V] = {0};
          
          int sum = 0;
          
          while(!pq.empty()) {
              auto it = pq.top();
              pq.pop();
              
              int wt = it.first;
              int node = it.second;
              
              if(vis[node]) continue;
              
              vis[node] = 1;
              sum += wt;
              
              for(auto it: adj[node]) {
                  int adjNode = it[0];
                  int edW = it[1];
                  
                  if(!vis[adjNode]) {
                      pq.push({edW, adjNode});
                  }
              }
          }
          
          return sum;
          
      }
  };
