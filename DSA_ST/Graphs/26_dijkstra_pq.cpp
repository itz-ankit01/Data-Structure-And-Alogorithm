#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
      vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
          vector<pair<int,int>> adj[V];
          for(auto it: edges) {
             
                  int u = it[0];
                  int v = it[1];
                  int wt = it[2];
                  
                  adj[u].push_back({v, wt});
              
          }
              
              priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
              pq.push({0, src});
              
              vector<int> dist(V, 1e9);
              dist[src] = 0;
              
              while(!pq.empty()) {
                  int dis = pq.top().first;
                  int node = pq.top().second;
                  
                  pq.pop();
                  
                  for(auto it: adj[node]) {
                      int adjN = it.first;
                      int edwt = it.second;
                      
                      if(edwt + dis < dist[adjN]) {
                          dist[adjN] = edwt + dis;
                          pq.push({edwt+dis, adjN});
                      }
                  }
              }
              return dist;
         
          
      }
  };