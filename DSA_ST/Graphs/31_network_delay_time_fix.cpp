#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int networkDelayTime(vector<vector<int>>& times, int n, int k) {
            vector<pair<int,int>> adj[n+1];
    
            for(auto it: times) {
                adj[it[0]].push_back({it[1], it[2]});
            }
    
            vector<int> dist(n+1, 1e9);
            dist[k] = 0;
    
            priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    
            pq.push({0, k});
    
            while(!pq.empty()) {
                int dis = pq.top().first;
                int node = pq.top().second;
    
                pq.pop();
    
                for(auto it: adj[node] ) {
                    int adjNode = it.first;
                    int edgwt = it.second;
    
                    if(edgwt + dis < dist[adjNode]) {
                        dist[adjNode] = edgwt + dis;
                        pq.push({edgwt + dis, adjNode});
                    }
                }
            }
    
            // for(auto it: dist) cout << it << endl;
    
            int ans = 0;
    
            for(int i = 1; i <= n; i++) {
                ans = max(ans, dist[i]);
            }
            return ans == 1e9 ? -1 : ans;
        }
    };