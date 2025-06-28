#include <bits/stdc++.h>
using namespace std;

class Solution {

  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
       
        vector<int> vis(V, 0);
        vector<int> adj[V];
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        vector<int> indegree(V, 0);
        vector<int> topo;

        for(int i=0; i<V; i++) {
            for(auto it: adj[i]) {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0; i<V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it: adj[node]) {
                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        
        return topo;
    }
};