#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
      vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
          
          vector<pair<int, int>> adj[V];
          for(auto it: edges) {
              adj[it[0]].push_back({it[1], it[2]});
          }
          
          set<pair<int,int>> st;
          st.insert({0, src});
          
          vector<int> dist(V, 1e9);
          dist[src] = 0;
          
          while(!st.empty()) {
              auto it = *(st.begin());
              st.erase(st.begin());
              
              int dis = it.first;
              int node = it.second;
              
              for(auto it: adj[node]) {
                  int adjNode = it.first;
                  int edgWt = it.second;
                  
                  if(dis + edgWt < dist[adjNode]) {
                      
                      if(dist[adjNode] != 1e9) {
                          st.erase({dist[adjNode], adjNode});
                      }
                      
                      dist[adjNode] = dis + edgWt;
                      st.insert({dis + edgWt, adjNode});
                  }
              }
          }
          
          return dist;
      }
  };