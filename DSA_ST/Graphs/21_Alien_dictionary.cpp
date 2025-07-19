#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> topoSort(int N, vector<int> adj[], vector<bool>& present) {
        vector<int> indegree(N, 0);
        queue<int> q;

        // Calculate indegrees
        for(int i=0; i<N; i++) {
            for(int it : adj[i]) {
                indegree[it]++;
            }
        }

        // Push only present characters with 0 indegree
        for(int i=0; i<N; i++) {
            if(indegree[i] == 0 && present[i]) {
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty()) {
            int node = q.front(); q.pop();
            topo.push_back(node);

            for(auto it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        return topo;
    }

public:
    string findOrder(vector<string> &words) {
        int n = 26;
        vector<int> adj[26];
        vector<bool> present(26, false);  // Mark which characters appear

        // Mark all characters that appear
        for(auto word : words) {
            for(char c : word) {
                present[c - 'a'] = true;
            }
        }

        // Build adjacency list based on first mismatch
        for(int i = 0; i < words.size() - 1; i++) {
            string s1 = words[i];
            string s2 = words[i+1];
            int len = min(s1.size(), s2.size());

            bool mismatch_found = false;
            for(int ptr = 0; ptr < len; ptr++) {
                if(s1[ptr] != s2[ptr]) {
                    adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                    mismatch_found = true;
                    break;
                }
            }

            // Edge Case: like ["abc", "ab"] → invalid order
            if (!mismatch_found && s1.size() > s2.size()) {
                return ""; // invalid case
            }
        }

        vector<int> topo = topoSort(n, adj, present);

        // If not all present characters are in topo sort → cycle
        if(topo.size() != count(present.begin(), present.end(), true)) {
            return "";
        }

        string ans = "";
        for(int ch : topo) {
            ans += (char)(ch + 'a');
        }
        return ans;
    }
};
