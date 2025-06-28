#include <bits/stdc++.h>
using namespace std;

class Solution {

    public:
      bool isCyclic(int V, vector<vector<int>> &edges) {
          
          vector<int> adj[V];
          
          int n = edges.size();
          for(int i=0; i<n; i++) {
              int u = edges[i][0];
              int v = edges[i][1];
              adj[u].push_back(v);
          }
          queue<int> q;
          vector<int> indegree(V, 0);
          
          for(int i=0; i<V; i++) {
              for(auto it: adj[i]) {
                  indegree[it]++;
              }
          }
          
          for(int i=0; i<V; i++) {
              if(indegree[i] == 0) {
                  q.push(i);
              }
          }
          vector<int> topo;
          while(!q.empty()) {
              int node = q.front();
              q.pop();
              topo.push_back(node);
              
              for(auto it: adj[node]) {
                  indegree[it]--;
                  
                  if(indegree[it] == 0 ) {
                      q.push(it);
                  }
              }
          }
          
          if(topo.size() == V) return false;
          else return true;
      }
  };