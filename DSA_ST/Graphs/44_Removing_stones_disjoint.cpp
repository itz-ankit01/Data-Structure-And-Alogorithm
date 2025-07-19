#include <bits/stdc++.h>
using namespace std;

class DisjointSet {
    public:
        vector<int> parent, rank, size;
    
        DisjointSet(int n) {
            parent.resize(n + 1);
            rank.resize(n + 1, 0);
            size.resize(n + 1, 1);
            for(int i = 0; i <= n; i++) {
                parent[i] = i;
            }
        }
    
        int findUParent(int node) {
            if(node == parent[node]) return node;
            return parent[node] = findUParent(parent[node]);
        }
    
        void unionBySize(int u, int v) {
            int ulp_u = findUParent(u);
            int ulp_v = findUParent(v);
            if(ulp_u == ulp_v) return;
            if(size[ulp_u] > size[ulp_v]) {
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            } else {
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
        }
    };
    
    class Solution {
    public:
        int removeStones(vector<vector<int>>& stones) {
            int n = stones.size();
            int maxRow = 0, maxCol = 0;
    
            for(auto& it : stones) {
                maxRow = max(maxRow, it[0]);
                maxCol = max(maxCol, it[1]);
            }
    
            DisjointSet ds(maxRow + maxCol + 2); // +2 to avoid boundary issues
            unordered_set<int> stoneNodes;
    
            for(auto& it : stones) {
                int nodeRow = it[0];
                int nodeCol = it[1] + maxRow + 1; // Shift column index
                ds.unionBySize(nodeRow, nodeCol);
                stoneNodes.insert(nodeRow);
                stoneNodes.insert(nodeCol);
            }
    
            int cnt = 0;
            for(auto node : stoneNodes) {
                if(ds.findUParent(node) == node) {
                    cnt++;
                }
            }
    
            return n - cnt;
        }
    };
    