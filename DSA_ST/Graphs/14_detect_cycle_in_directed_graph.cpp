#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool dfsCheck(int node, vector<int> &vis, vector<int>&pathVis, vector<int> adj[]) {
        vis[node] = 1;
        pathVis[node] = 1;
        
        // traverse for adjacent nodes
        for(auto it: adj[node]) {
            // when the node is not visited
            if(!vis[it]) {
                if(dfsCheck(it, vis, pathVis, adj) == true) {
                    return true;
                }
            }
            // if the node has been previously visited
            // but it has to be visited on the same path
            else if(pathVis[it] == 1) {
                return true;
            }
        }
        
        
        pathVis[node] = 0;
        return false;
    }
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        
        vector<int> adj[V];
        int n = edges.size();
        for(int i=0; i<n; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(dfsCheck(i, vis, pathVis, adj) == true) {
                    return true;
                }
            }
        }
        return false;
    }
};