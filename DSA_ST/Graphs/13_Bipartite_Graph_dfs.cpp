#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool dfs(int node, int col, vector<int> &color, vector<int>adj[]) {
        
        color[node] = col;
        
        for(auto it: adj[node]) {
            if(color[it] == -1) {
                if(dfs(it, !col, color, adj) == false) {
                    return false;
                }
            }
            else if(color[it] == col) {
                return false;
            }
        }
        return true;
    }
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int> color(V, -1);
        vector<int> adj[V];
        int n = edges.size();
        int m = edges[0].size();
        for(int i=0; i < n; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0; i<V; i++) {
            if(color[i] == -1) {
                if(dfs(i, 0, color, adj) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};