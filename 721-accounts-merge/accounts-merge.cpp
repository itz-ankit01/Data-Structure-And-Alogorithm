
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
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        DisjointSet ds(n);

        unordered_map<string, int> mailMap;

        for(int i = 0; i < n; i++) {
            for(int j = 1; j < accounts[i].size(); j++) {
                string mail = accounts[i][j];
                if(mailMap.find(mail) == mailMap.end()) {
                    mailMap[mail] = i;
                }
                else {
                    ds.unionByRank(i, mailMap[mail]);
                }
            }
        }

        vector<string> mergedMail[n];
        
        for(auto it: mailMap) {
            string mail = it.first;
            int node = ds.findUParent(it.second);

            mergedMail[node].push_back(mail);
        }
        
        vector<vector<string>> ans;

        for(int i = 0; i < n; i++) {
            if(mergedMail[i].size() == 0) continue;
            sort(mergedMail[i].begin(), mergedMail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it: mergedMail[i]) {
                temp.push_back(it);
            }
            ans.push_back(temp);
            temp.clear();
        }
        
        return ans;
    }
};