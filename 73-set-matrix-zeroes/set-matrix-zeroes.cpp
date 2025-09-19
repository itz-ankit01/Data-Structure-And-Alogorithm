class Solution {
    void solve(int row, int col, vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < n; i++) {
            matrix[row][i] = 0;
        } 
        for(int i = 0; i < m; i++) {
            matrix[i][col] = 0;
        } 
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<pair<int, int>> v;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) v.push_back({i, j});
            }
        }

        for(int i = 0; i < v.size(); i++) {
            solve(v[i].first, v[i].second, matrix);
        }
    }
};