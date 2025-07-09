class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        dist[0][0] = 0;
        
        // {dist, {row, col}}
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {0, 0}});

        if(grid[0][0] == 1) return -1;



        while(!q.empty()) {
            int dis = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;

            q.pop();

            if(row == n-1 && col == n-1) {
                return dis+1;
            }

            for(int drow = -1 ; drow <= 1; drow++) {
                for(int dcol = -1; dcol <= 1; dcol++) {
                    int nrow = row + drow;
                    int ncol = col + dcol;
                    
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0 && dis + 1 < dist[nrow][ncol]) {
                        dist[nrow][ncol] = 1 + dis;
                        q.push({1+dis, {nrow, ncol}});
                    }
                }
            }
        }
        return -1;
    }
};