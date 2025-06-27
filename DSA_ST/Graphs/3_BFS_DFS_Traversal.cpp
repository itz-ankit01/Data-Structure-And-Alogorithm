#include<bits/stdc++.h>
using namespace std;

class Solution {
  void dfs(int node, vector<int>&vis, vector<int>&ans, vector<int> adj[]) {
    vis[node] = 1;
    ans.push_back(node);
    for(auto it: adj[node]){
      if(!vis[it]){
        vis[it] = 1;
        dfs(it, vis, ans, adj);
      }
    }
  }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int> ans;
      vector<int> vis(V, 0);
      dfs(0, vis, ans, adj);
      return ans;
    }
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> vis(V, 0);
        queue<int> q;
        q.push(0);
        vis[0] = 1;

        while(!q.empty()) {
          int node = q.front();
          q.pop();
          ans.push_back(node);

          for(auto it: adj[node]) {
            if(!vis[it]){
              vis[it] = 1;
              q.push(it);
            }
          }
        }
        return ans;
    }
};
