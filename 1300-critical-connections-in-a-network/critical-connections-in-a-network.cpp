class Solution {
    private: 
    int timer = 0;

    void dfs(int node, int parent, vector<int> &vis, vector<int> adj[], int low[], int tin[], vector<vector<int>> &ans) {
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;

        for(auto it: adj[node]) {
            if(it == parent) continue;
            if(!vis[it]) {
                dfs(it, node, vis, adj, low, tin, ans);
                low[node] = min(low[node], low[it]);

                if(low[it] > tin[node]) {
                    ans.push_back({node, it});
                }
            }
            else {
                low[node] = min(low[node], low[it]);
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto it: connections) {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int low[n];
        int tin[n];
        vector<int> vis(n, 0);
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, -1, vis, adj, low, tin, ans);
            }
        }
        return ans;
    }
};