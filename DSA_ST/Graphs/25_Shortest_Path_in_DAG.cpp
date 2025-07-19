#include <bits/stdc++.h>
using namespace std;


class Solution {
    void topoSort(int node, int vis[], stack<int> &st, vector<pair<int,int>> adj[]) {
        vis[node] = 1;
        
        for(auto it: adj[node]) {
            if(!vis[it.first]) {
                topoSort(it.first, vis, st, adj);
            }
        }
        st.push(node);
    }
  public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        
        vector<pair<int, int>> adj[V];
        
        // Adjacency list
        for(int i = 0; i < E; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v, wt});
        }
        
        stack<int> st;
        int vis[V] = {0};
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                topoSort(i, vis, st, adj);
            }
        }
        
        vector<int> dist(V, 1e9);
        dist[0] = 0;
        
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            
            for(auto it: adj[node]) {
                int v = it.first;
                int wt = it.second;
                
                if(dist[node] + wt < dist[v]) {
                    dist[v] = wt + dist[node];
                }
            }
            
        }
        
        for(int i=0; i<V; i++) {
            if(dist[i] == 1e9) dist[i] = -1;
        }
        
        return dist;
        
        
    }
};
