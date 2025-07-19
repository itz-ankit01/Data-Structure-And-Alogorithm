#include <bits/stdc++.h>
using namespace std;

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

int main() {
        
    DisjointSet ds(7);

    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    if(ds.findUParent(3) == ds.findUParent(7)){
        cout << "Same\n";
    }
    else cout << "Not Same\n";
    ds.unionBySize(3, 7);
    if(ds.findUParent(3) == ds.findUParent(7)){
        cout << "Same\n";
    }
    else cout << "Not Same\n";
    return 0;
}