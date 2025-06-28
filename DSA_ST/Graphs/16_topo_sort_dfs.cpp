#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]) {
        vis[node] = 1;
        
        // traverse the neighbours
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, st, adj);
            }
        }
        st.push(node);
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> vis(V, 0);
        stack<int> st;
        vector<int> adj[V];
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfs(i, vis, st, adj);
            }
        }
        vector<int> topo;
        while(!st.empty()) {
            topo.push_back(st.top());
            st.pop();
        }
        return topo;
    }
};