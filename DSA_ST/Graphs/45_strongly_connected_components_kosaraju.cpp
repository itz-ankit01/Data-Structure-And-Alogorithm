#include <bits/stdc++.h>
using namespace std;


class Solution {
    
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st) {
        vis[node] = 1;
        
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, st);
            }
        }
        st.push(node);
    }
    
    void dfs3(int node, vector<int> &vis, vector<int> adjR[]){
        vis[node] = 1;
        
        for(auto it: adjR[node]) {
            if(!vis[it]) {
                dfs3(it, vis, adjR);
            }
        }
    }
  public:
    int kosaraju(vector<vector<int>> &adj) {
        
        int V = adj.size();
        
        vector<int> vis(V, 0);
        stack<int> st;
        
        // step - 1 -> sort edges according to finishing time
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj, st);
            }
        }
        
        // step - 2 -> reverse all the edges
        
        vector<int> adjR[V];
        
        for(int i = 0; i < V; i++) {
            vis[i] = 0;
            for(auto it: adj[i]) {
                adjR[it].push_back(i);
            }
        }
        
        // step-> 3 : DO a DFS
        
        int scc = 0;
        
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            
            if(!vis[node]) {
                scc++;
                dfs3(node, vis, adjR);
            }
        }
        return scc;
    }
};