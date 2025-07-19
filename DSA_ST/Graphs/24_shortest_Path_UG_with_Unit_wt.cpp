#include <bits/stdc++.h>
using namespace std;

class Solution {

    public:
     vector<int> shortestPath(vector<vector<int>>& adj, int src) {
         
       
         int V = adj.size();
         queue<int> q;
         vector<int> dist(V, 1e9);
         dist[src] = 0;
         q.push(src);
         
         while(!q.empty()) {
             int node = q.front();
             q.pop();
             
             for(auto it: adj[node]) {
                 if(dist[node] + 1 < dist[it]) {
                     dist[it] = 1 + dist[node];
                     q.push(it);
                 }
             }
         }
         
         for(int i=0; i<V; i++) {
             if(dist[i] == 1e9) {
                 dist[i] = -1;
             }
         }
         return dist;
         
     }
 };