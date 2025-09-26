class Solution {
    int totalEmpty = 0; // includes start
    int n, m;

    int solve(int sr, int sc, int er, int ec, vector<vector<int>> &vis, vector<vector<int>> &grid, int count) {
        if (sr == er && sc == ec) {
            // if we covered all empty cells
            return (count == totalEmpty) ? 1 : 0;
        }

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int ways = 0;
        for (int i=0; i<4; i++) {
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                && !vis[nrow][ncol] && grid[nrow][ncol] != -1) {
                
                vis[nrow][ncol] = 1;
                ways += solve(nrow, ncol, er, ec, vis, grid, count+1);
                vis[nrow][ncol] = 0; // backtrack
            }
        }
        return ways;
    }

public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int sr=0, sc=0, er=0, ec=0;

        // find start, end, and count empty squares
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j] != -1) totalEmpty++;
                if (grid[i][j] == 1) { sr = i; sc = j; }
                if (grid[i][j] == 2) { er = i; ec = j; }
            }
        }

        vector<vector<int>> vis(n, vector<int>(m, 0));
        vis[sr][sc] = 1;

        return solve(sr, sc, er, ec, vis, grid, 1);
    }
};
