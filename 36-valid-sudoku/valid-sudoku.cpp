class Solution {
public:

    bool check(int &i, int &j, vector<vector<char>>& board) {
        char c = board[i][j];
        int cnt = 0;
        for(int k=0; k<9; k++) {
            if(board[i][k] == c) cnt++;
        }
        if(cnt > 1) return false;
        cnt = 0;
        for(int k=0; k<9; k++) {
            if(board[k][j] == c) cnt++;
        }
        if(cnt > 1) return false;

        cnt = 0;

        int row = i/3 * 3;
        int col = j/3 * 3;

        for(int l = row; l < row+3; l++) {
            for(int m = col; m < col + 3; m++) {
                if(board[l][m] == c) cnt++;
                if(cnt>1) return false;
            }
        }
        return true;

    }

    bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = board.size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j] != '.') {
                    if(check(i, j, board) == false) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};