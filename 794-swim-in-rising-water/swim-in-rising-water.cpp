class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        priority_queue< pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;

        pq.push({grid[0][0], {0, 0}});
        dist[0][0] = grid[0][0];

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int wt = it.first;
            int row = it.second.first;
            int col = it.second.second;

            for(int i = 0; i < 4; i++) {
                int nrow = row + dr[i];
                int ncol = col + dc[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    int edw = grid[nrow][ncol];
                    int cost = max(edw, wt);
                    if(cost < dist[nrow][ncol]){
                        dist[nrow][ncol] = cost;
                        pq.push({cost, {nrow, ncol}});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};