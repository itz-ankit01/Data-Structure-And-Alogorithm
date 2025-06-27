class Solution {
        void fun(int row, int col, vector<vector<int>> &vis, vector<vector<int>>&grid, int delRow[], int delCol[]) {
        vis[row][col] = 1;
        

        int n = grid.size();
        int m = grid[0].size();

       
            for(int i=0; i<4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] ==  1) {
                    fun(nrow, ncol, vis, grid, delRow, delCol);
                }
            }
        
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        for(int j = 0; j < m; j++) {
            if(grid[0][j] == 1) {
                fun(0, j, vis, grid, delRow, delCol);
            }
            if(grid[n-1][j] == 1) {
                fun(n-1, j, vis, grid, delRow, delCol);
            }
        }
        
        for(int i=0; i<n; i++) {
            if(grid[i][0] == 1) {
                fun(i, 0, vis, grid, delRow, delCol);
            }
            if(grid[i][m-1] == 1) {
                fun(i, m-1, vis, grid, delRow, delCol);
            }
        }
        int ways = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(vis[i][j] == 0 && grid[i][j] == 1) {
                    ways++;
                }
            }
        }

        return ways;
    }
};