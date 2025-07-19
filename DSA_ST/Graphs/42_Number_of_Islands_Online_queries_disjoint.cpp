#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class DisjointSet {
    vector<int> parent, rank, size;
    public:

    DisjointSet(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        size.resize(n+1, 1);

        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // find ultimate parent of any node
    int findUParent(int node) {
        if(node == parent[node]) {
            return node;
        }
        return parent[node] = findUParent(parent[node]);
    }

    // union by rank
    void unionByRank(int u, int v) {
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);

        if(ulp_u == ulp_v) return;

        if(rank[ulp_u] > rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        }
        else if(rank[ulp_v] > rank[ulp_u]) {
            parent[ulp_u] = ulp_v;
        }
        else {
            parent[ulp_u] = ulp_v;
            rank[ulp_u]++;
        }
    }

    // union by size
    void unionBySize(int u, int v) {
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);

        if(ulp_u == ulp_v) return;

        if(size[ulp_u] > size[ulp_v]) {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
        else {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
    }
};


class Solution {
    private:
    bool isValid(int adjr, int adjc, int n, int m) {
        return (adjr >= 0 && adjr < n && adjc >= 0 && adjc < m);
    }
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        // code here
        
        
        DisjointSet ds(n*m);
        int vis[n][m];
        memset(vis, 0, sizeof vis);
        
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        int cnt = 0;
        vector<int> ans;
        for(auto it: operators) {
            int row = it[0];
            int col = it[1];
            
            if(vis[row][col] == 1) {
                ans.push_back(cnt);
                continue;
            }
            
            vis[row][col] = 1;
            cnt++;
            
            for(int i = 0; i < 4; i++) {
                int adjr = row + drow[i];
                int adjc = col + dcol[i];
                
                if( isValid(adjr, adjc, n, m)) {
                    if(vis[adjr][adjc] == 1) {
                        int node = row * m + col;
                        int adjNode = adjr * m + adjc;
                        if(ds.findUParent(node) != ds.findUParent(adjNode)) {
                            ds.unionBySize(node, adjNode);
                            cnt--;
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;   
    }
};
