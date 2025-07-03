class Solution {

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int N = graph.size();
        vector<int> adj[N];

        // reverse the edges
        for(int i=0; i<N; i++) {
            for(auto it: graph[i]) {
                adj[it].push_back(i);
            }
        }

        vector<int> indegree(N, 0);
        for(int i=0; i<N; i++) {
            for(auto it: adj[i]) {
                indegree[it]++;
            }
        }

        queue<int> q;
        vector<int> safeNodes;
        for(int i=0; i<N; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);

            // look for neighbours
            for(auto it: adj[node]) {
                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }

};