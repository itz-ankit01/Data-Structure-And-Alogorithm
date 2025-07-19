#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
            vector<pair<int, int>> adj[n];
            for(auto it: flights) {
                adj[it[0]].push_back({it[1], it[2]});
            }
    
            vector<int> dist(n, 1e9);
            dist[src] = 0;
    
            // {stops, {node, dist}}
            priority_queue< pair<int, pair<int, int> >, vector<pair<int, pair<int, int> >>, greater<pair<int, pair<int, int> >> > pq;
    
            pq.push({0, {src, 0}});
    
            while(!pq.empty()) {
                int stops = pq.top().first;
                int node = pq.top().second.first;
                int dis = pq.top().second.second;
    
                pq.pop();
    
                for(auto it: adj[node]) {
                    int adjNode = it.first;
                    int wt = it.second;
    
                    if (stops > k) continue;
    
                    if(dis + wt < dist[adjNode] ) {
                        dist[adjNode] = wt + dis;
                        pq.push({stops + 1, {adjNode, wt + dis}});
                    }
                }
            }
    
            return dist[dst] == 1e9 ? -1 : dist[dst];
        }
    };