#include <bits/stdc++.h>
using namespace std;

class Solution{

    bool dfsdetectCycle(int node, int parent, vector<int>&vis, vector<int> adj[]) {
        vis[node] = 1;
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(dfsdetectCycle(it, node, vis, adj) == true) {
                    return true;
                }
            }
            else if(parent != it) {
                return true;
            }
        }
        return false;
    }
    
    bool detect(int src,  vector<int> &vis, vector<int> adj[]) {
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src, -1});
        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto it: adj[node]) {
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push({it, node});
                }
                else if(parent != it) {
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(dfsdetectCycle(i, -1, vis, adj) == true) {
                    return true;
                }
            }
        }
        return false;
    }
};