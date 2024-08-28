#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

/*
bool isSafe(int col, int row, vector<string> &board, int n){
    // check Upper left Diagonal
    int duprow = row;
    int dupCol = col;

    while(row>=0 && col>=0){
        if(board[row][col] == 'Q') return false;
        col--;
        row--;
    }

    // Check Left Row 
    col = dupCol;
    row = duprow;

    while(col>=0){
        if(board[row][col] == 'Q') return false;
        col--;
    }

    // Check Bottom left Diagonal
    col = dupCol;
    row = duprow;

    while(col>=0 && row<n){
        if(board[row][col] == 'Q') return false;
        col--;
        row++;
    }

    return true;
}

void nQueen(int col, vector<string> &board, vector<vector<string> > &ans, int n){
    //Base Case
    if(col == n){
        ans.push_back(board);
    }

    for(int row = 0; row < n; row++){
        if(isSafe(col, row, board, n)){
            board[row][col] = 'Q';
            nQueen(col+1, board, ans, n);
            board[row][col] = '.';
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<string> > ans;
    vector<string> board(n);
    string s(n, '.');

    for(int i=0; i<n; i++){
        board[i] = s;
    }

    nQueen(0, board, ans, n);

    for(int i=0; i < ans.size(); i++){

        for(int j = 0; j<ans[i].size(); j++){
            cout << ans[i][j] << " " << endl;
        }
   
        cout << endl;
    }
    return 0;
}   

*/


// Second Approach TO this Problem
void nQueen(int col,  vector<string> &board,  vector<vector<string> >&ans, int n, vector<int>&leftRow, vector<int>&upperDiagonal, vector<int>&lowerDiagonal){
    // Base Case
    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int row = 0; row < n; row++){
        if(leftRow[row] == 0 && upperDiagonal[(n-1) + (col - row)] == 0 && lowerDiagonal[col + row] == 0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[(n-1) + (col - row)] = 1;
            lowerDiagonal[col + row] = 1;
            nQueen(col+1, board, ans, n, leftRow, upperDiagonal, lowerDiagonal);
            board[row][col] = '.';
            leftRow[row] = 0;
            upperDiagonal[(n-1) + (col - row)] = 0;
            lowerDiagonal[col + row] = 0;
        }
    }
    return;
}
int main(){
    int n;
    cin >> n;
    vector<vector<string> > ans;
    vector<string> board(n);
    string s(n, '.');

    for(int i=0; i<n; i++){
        board[i] = s;
    }

    vector<int> leftRow(n, 0), upperDiagonal( 2 * n - 1, 0), lowerDiagonal( 2 * n - 1, 0);

    nQueen(0, board, ans, n, leftRow, upperDiagonal, lowerDiagonal);

    for(int i=0; i < ans.size(); i++){

        for(int j = 0; j<ans[i].size(); j++){
            cout << ans[i][j] << " " << endl;
        }
   
        cout << endl;
    }
    return 0;
}   