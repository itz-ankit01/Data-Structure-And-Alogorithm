class Solution {

    bool isPossible(int &row, int &col, char val, vector<vector<char>>& grid) {
        
        for(int i=0; i<9; i++) {
            if(grid[row][i] == val) return false;
        }

        for(int i=0; i<9; i++) {
            if(grid[i][col] == val) return false;
        }

        int r = (row/3) * 3;
        int c = (col/3) * 3;

        for(int i = r; i < r+3; i++) {
            for(int j = c; j < c+3; j++) {
                if(grid[i][j] == val) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& grid) {
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(grid[i][j] != '.') continue;
                else {
                    for(char digit = '1'; digit <= '9'; digit++) {
                        if(isPossible(i, j, digit, grid) == true) {
                            grid[i][j] = digit;
                            if(solve(grid) == true) return true;
                            grid[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};