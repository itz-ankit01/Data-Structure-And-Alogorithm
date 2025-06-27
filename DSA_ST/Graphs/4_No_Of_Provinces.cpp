#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        void bfs(int node, vector<int>& vis, vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            queue<int> q;
            q.push(node);
            vis[node] = 1;
    
            while(!q.empty()) {
                int u = q.front();
                q.pop();
    
                for(int v = 0; v < n; v++) {
                    if(isConnected[u][v] == 1 && !vis[v]) {
                        vis[v] = 1;
                        q.push(v);
                    }
                }
            }
        }
    
    public:
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            vector<int> vis(n, 0); 
            int cnt = 0;
    
            for(int i = 0; i < n; i++) {
                if(!vis[i]) {
                    cnt++;
                    bfs(i, vis, isConnected);
                }
            }
    
            return cnt;
        }
    };
    