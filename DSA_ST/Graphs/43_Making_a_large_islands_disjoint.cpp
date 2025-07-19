#include <bits/stdc++.h>
using namespace std;


class DisjointSet {
    
    public:
    vector<int> parent, rank, size;
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
    bool isValid(int nrow, int ncol, int n) {
        return (nrow >=0 && ncol >= 0 && nrow < n && ncol < n);
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();

        DisjointSet ds(n*n);

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        // step - 1 (connections)

        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                if(grid[row][col] == 0) continue;

                for(int i = 0; i < 4; i++) {
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];

                    if(isValid(nrow, ncol, n) && grid[nrow][ncol] == 1) {
                        int nodeNo = row * n + col;
                        int adjNodeNo = nrow * n + ncol;
                        if(ds.findUParent(nodeNo) != ds.findUParent(adjNodeNo)) {
                            ds.unionBySize(nodeNo, adjNodeNo);
                        }
                    }
                }
            }
        }

        // steps - 2 (0 -> 1)
        int mx = 0;
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                if(grid[row][col] == 1) continue;
                set<int> components;
                for(int i = 0; i < 4; i++) {
                    int nrow = row + drow[i];
                    int ncol = col + dcol[i];

                    if(isValid(nrow, ncol, n)) {
                        if(grid[nrow][ncol] == 1) {
                            components.insert(ds.findUParent(nrow * n + ncol));
                        }
                    }
                }
                int size = 0;
                for(auto it: components) {
                    size += ds.size[it];
                }

                mx = max(mx, size+1);
            }
        }

        for(int row = 0; row < n; row++) {
            for(int col = 0; col < n; col++) {
                mx = max(mx, ds.size[ds.findUParent(row * n + col)]);
            }
        }

        return mx;

    }
};