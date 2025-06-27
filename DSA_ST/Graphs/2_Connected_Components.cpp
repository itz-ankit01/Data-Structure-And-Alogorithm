#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<int>& vis, vector<int> adj[]) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, vis, adj);  
            }
        }
    }

   public:
    int findNumberOfComponent(int V, vector<vector<int>>& edges) {
        vector<int> adj[V]; 

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);  
        int cnt = 0;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, vis, adj);  
            }
        }

        return cnt;
    }
};
