class Solution {
    void fun(int row, int col, vector<vector<int>> &vis, vector<vector<char>>&board, int delRow[], int delCol[]) {
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        q.push({row, col});

        int n = board.size();
        int m = board[0].size();

        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            for(int i=0; i<4; i++) {
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        for(int j = 0; j < m; j++) {
            if(board[0][j] == 'O') {
                fun(0, j, vis, board, delRow, delCol);
            }
            if(board[n-1][j] == 'O') {
                fun(n-1, j, vis, board, delRow, delCol);
            }
        }
        
        for(int i=0; i<n; i++) {
            if(board[i][0] == 'O') {
                fun(i, 0, vis, board, delRow, delCol);
            }
            if(board[i][m-1] == 'O') {
                fun(i, m-1, vis, board, delRow, delCol);
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(vis[i][j] == 0 && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};