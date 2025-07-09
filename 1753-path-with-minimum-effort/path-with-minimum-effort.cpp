class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> dist(n, vector<int> (m, 1e9));
        dist[0][0] = 0;
        
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        // {dist, {row, col}}

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;

        pq.push({0, {0, 0}});
        int ans = INT_MAX;

        while(!pq.empty()) {
            int dis = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;

            pq.pop();

            if(row == n-1 && col == m-1) {
                ans = min(ans, dis);
            }

            for(int i=0; i<4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    int maxEffort = max(dis, abs(heights[nrow][ncol] - heights[row][col]));
                    if(maxEffort < dist[nrow][ncol]) {
                        dist[nrow][ncol] = maxEffort;
                        pq.push({maxEffort, {nrow, ncol}});
                    }
                }
            }
        }

        return ans;
    }
};