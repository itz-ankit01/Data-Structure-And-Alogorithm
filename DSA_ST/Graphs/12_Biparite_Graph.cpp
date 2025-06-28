#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool check(int start, vector<int> &color, vector<int>adj[]) {
        queue<int> q;
        q.push(start);
        color[start] = 0;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            for(auto it: adj[node]) {
                if(color[it] == -1) {
                    q.push(it);
                    color[it] = !color[node];
                }
                else if(color[it] == color[node]) {
                    return false;
                }
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
                if(check(i, color, adj) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};