class Solution {
    int maxArea (int startRow, int endRow, int startCol, int endCol, vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int a = n, b = -1, c = m, d = -1;

        for(int row = startRow; row < endRow; row++) {
            for(int col = startCol; col < endCol; col++) {
                if(grid[row][col] == 1) {
                    a = min(a, row);
                    b = max(b, row);
                    c = min(c, col);
                    d = max(d, col);
                }
            }
        }

        return (b - a + 1) * (d - c + 1);
    }

    int fun(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = INT_MAX;
        for(int rowSplit = 1; rowSplit < n; rowSplit++) {
            for(int colSplit = 1; colSplit < m; colSplit++) {
                int top = maxArea(0, rowSplit, 0, m, grid);
                int bottomLeft = maxArea(rowSplit, n, 0, colSplit, grid);
                int bottomRight = maxArea(rowSplit, n, colSplit, m, grid);

                ans = min(ans, top + bottomLeft + bottomRight);

                int topLeft = maxArea(0, rowSplit, 0, colSplit, grid);
                int topRight = maxArea(0, rowSplit, colSplit, m, grid);
                int bottom = maxArea(rowSplit, n, 0, m, grid);
                
                ans = min(ans, topLeft + topRight + bottom);
            }
        }

        for(int rowSplit1 = 1; rowSplit1 < n; rowSplit1++) {
            for(int rowSplit2 = rowSplit1+1; rowSplit2 < n; rowSplit2++) {
                int top = maxArea(0, rowSplit1, 0, m, grid);
                int middle = maxArea(rowSplit1, rowSplit2, 0, m, grid);
                int bottom = maxArea(rowSplit2, n, 0, m, grid);

                ans = min(ans, top + middle + bottom);
            }
        }
        
        return ans;
    }

    vector<vector<int>> rotate(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> rotatedGrid(m, vector<int>(n));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                rotatedGrid[j][n - i - 1] = grid[i][j];
            }
        }

        return rotatedGrid;
    }
    
public:
    int minimumSum(vector<vector<int>>& grid) {
        int ans = fun(grid);
        
        vector<vector<int>> rotatedGrid = rotate(grid);
        ans = min(ans, fun(rotatedGrid));

        return ans;
    }
};
