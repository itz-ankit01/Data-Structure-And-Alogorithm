class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<int> adj[numCourses+1];
        for(int i=0; i<n; i++) {
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];

            adj[v].push_back(u);
        }

        queue<int> q;
        vector<int> indegree(numCourses, 0);

        for(int i = 0; i < numCourses; i++) {
            for(auto it: adj[i]) {
                indegree[it]++;
            }
        }
        for(int i = 0; i < numCourses; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it: adj[node]) {
                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        if(topo.size() == numCourses) return true;
        else return false;
    }
};