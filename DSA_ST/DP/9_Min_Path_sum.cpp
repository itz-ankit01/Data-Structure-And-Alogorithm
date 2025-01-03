#include <bits/stdc++.h>
using namespace std;

// ----------------- REC AND MEMOIZATION -------------------------

class Solution {
    int f(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if(i == 0 && j == 0) return grid[0][0];
        if(i < 0 || j < 0) return (int)INT_MAX;

        if(dp[i][j] != -1) return dp[i][j];

        int up = f(i-1, j, grid, dp);
        int left = f(i, j-1, grid, dp);

        return dp[i][j] = grid[i][j] + min(up, left);

    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return f(n-1, m-1, grid, dp);
    }
};

// -------------------- TABULATION ------------------

class Solution {
    int mod = 1000000009;
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == 0 && j == 0) dp[i] [j] = grid[0][0];
                else {
                    int up = grid[i][j];
                    if(i > 0) up += dp[i-1][j];
                    else up += mod;

                    int left = grid[i][j];
                    if(j>0) left += dp[i][j-1];
                    else left += mod;

                    dp[i][j] = min(up, left);
                }
            }
        }
        return dp[n-1][m-1];
    }
};


// --------------------------- Space Optimization ----------------------

class Solution {
    int mod = 1000000009;
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> prev(m, 0);
        
        for(int i = 0; i < n; i++) {
            vector<int> cur(m, 0);
            for(int j = 0; j < m; j++) {
                if(i == 0 && j == 0) cur[j] = grid[0][0];
                else {
                    int up = grid[i][j];
                    if(i > 0) up += prev[j];
                    else up += mod;

                    int left = grid[i][j];
                    if(j>0) left += cur[j-1];
                    else left += mod;

                    cur[j] = min(up, left);
                }
            }
            prev = cur;
        }
        return prev[m-1];
    }
};