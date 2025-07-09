class Solution {
    int mod = 1e9 + 7;
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, long long>> adj[n];
        for(auto it: roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        vector<long long> dist(n, 1e18); // use a large value, long long
        vector<int> ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        pq.push({0, 0});

        while(!pq.empty()) {
            long long cost = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (cost > dist[node]) continue; // optimization

            for(auto it: adj[node]) {
                int adjNode = it.first;
                long long edgW = it.second;

                if(cost + edgW < dist[adjNode]) {
                    dist[adjNode] = cost + edgW;
                    ways[adjNode] = ways[node];
                    pq.push({dist[adjNode], adjNode});
                }
                else if(cost + edgW == dist[adjNode]) {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }

        return ways[n-1];
    }
};
