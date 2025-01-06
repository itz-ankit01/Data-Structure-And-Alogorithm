#include <bits/stdc++.h>
using namespace std;

// ------------------- RECURSION ---------------------

class Solution {
    int f(int i, int j1, int j2, int n, int m, vector<vector<int>>& grid) {
        if(j1 < 0 || j2 < 0 || j1 >= m || j2 >= m) return -1e8;
        if(i == n-1) {
            if(j1 == j2) return grid[i][j1];
            else {
                return grid[i][j1] + grid[i][j2];
            }
        }
        
        // explore all the paths
        int maxi = -1e8;
        for(int dj1 = -1; dj1 <= 1; dj1++) {
            for(int dj2 = -1; dj2 <=1; dj2++) {
                int value = 0;
                if(j1 == j2) value = grid[i][j1];
                else {
                    value = grid[i][j1] + grid[i][j2];
                }
                value += f(i+1, j1+dj1, j2+dj2, n, m, grid);
                maxi = max(maxi, value);
            }
        }
        return maxi;
    }
  public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        return f(0, 0, m-1, n, m, grid);
        
    }
};


// ------------------------- Memoization -------------------

class Solution {
    int f(int i, int j1, int j2, int n, int m, vector<vector<int>>& grid, vector<vector<vector<int>>> &dp) {
        if(j1 < 0 || j2 < 0 || j1 >= m || j2 >= m) return -1e8;
        if(i == n-1) {
            if(j1 == j2) return grid[i][j1];
            else {
                return grid[i][j1] + grid[i][j2];
            }
        }

        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        
        // explore all the paths
        int maxi = -1e8;
        for(int dj1 = -1; dj1 <= 1; dj1++) {
            for(int dj2 = -1; dj2 <=1; dj2++) {
                int value = 0;
                if(j1 == j2) value = grid[i][j1];
                else {
                    value = grid[i][j1] + grid[i][j2];
                }
                value += f(i+1, j1+dj1, j2+dj2, n, m, grid, dp);
                maxi = max(maxi, value);
            }
        }
        return dp[i][j1][j2] = maxi;
    }
  public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        // dp[n][m][m]
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
        return f(0, 0, m-1, n, m, grid, dp);
        
    }
};


// ----------------------------- Tabulation ----------------------

class Solution {
   
  public:
    int solve(int n, int m, vector<vector<int>>& grid) {
        // dp[n][m][m]
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, 0)));
        
        // initialisation'

        for(int j1 = 0; j1 < m; j1++) {
            for(int j2 = 0; j2 < m; j2++) {
                if(j1 == j2) dp[n-1][j1][j2] = grid[n-1][j1];
                else {
                    dp[n-1][j1][j2] = grid[n-1][j1] + grid[n-1][j2];
                }
            }
        }

        for(int i = n-2; i >= 0; i--) {
            for(int j1 = 0; j1 < m; j1++) {
                for(int j2=0; j2 < m; j2++) {
                    int maxi = -1e8;
                    for(int dj1 = -1; dj1 <= 1; dj1++) {
                        for(int dj2 = -1; dj2 <=1; dj2++) {
                            int value = 0;
                            if(j1 == j2) value = grid[i][j1];
                            else {
                                value = grid[i][j1] + grid[i][j2];
                            }
                            value += dp[i+1][j1+dj1][j2+dj2];
                            maxi = max(maxi, value);
                        }
                    }
                    dp[i][j1][j2] = maxi;
                }
            }
        }
        return dp[0][0][m-1];
    }
};