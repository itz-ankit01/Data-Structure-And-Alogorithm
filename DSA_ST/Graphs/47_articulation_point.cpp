#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
    int timer = 0;
    void dfs(int node, int parent, vector<int> &vis, vector<int> adj[], int low[], int tin[], int hash[]) {
        vis[node] = 1;
        low[node] = tin[node] = timer;
        timer++;
        int child = 0;
        
        for(auto it: adj[node]) {
            if(it == parent) continue;
            
            if(!vis[it]) {
                dfs(it, node, vis, adj, low, tin, hash);
                
                low[node] = min(low[node], low[it]);
                
                if(low[it] >= tin[node] && parent != -1) {
                    hash[node] = 1;
                }
                child++;
            }
            else {
                low[node] = min(low[node], tin[it]);
            }
        }
        
        if(child > 1 && parent == -1) {
            hash[node] = 1;
        }
    }
  public:
    vector<int> articulationPoints(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V, 0);
        int hash[V] = {0};
        int low[V];
        int tin[V];
        
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                dfs(i, -1, vis, adj, low, tin, hash);
            }
        }
        
        vector<int> ans;
        for(int i = 0; i < V; i++) {
            if(hash[i] == 1) {
                ans.push_back(i);
            }
        }
        
        if(ans.size() == 0) return {-1};
        return ans;
    }
};