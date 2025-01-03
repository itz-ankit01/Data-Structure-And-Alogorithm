#include <bits/stdc++.h>
using namespace std;

// ------------------------ RECURSIVE -----------------------

class RecursiveSolution {
    int f(int i, int j, vector<vector<int>>& Grid) {
        if(i >= 0 && j>=0 && Grid[i][j] == 1) return 0;
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0) return 0;

        int up = f(i-1, j, Grid);
        
        int left = f(i, j-1, Grid);
        
        return up + left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int n = Grid.size();
        int m = Grid[0].size();

        return f(n-1, m-1, Grid);
    }
};

// ----------------------------- MEMOIZATION -----------------------

class Solution {
    int f(int i, int j, vector<vector<int>>& Grid, vector<vector<int>>& dp) {
        if(i >= 0 && j>=0 && Grid[i][j] == 1) return 0;
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int up = f(i-1, j, Grid, dp);
        
        int left = f(i, j-1, Grid, dp);

        return dp[i][j] = up + left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int n = Grid.size();
        int m = Grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));

        return f(n-1, m-1, Grid, dp);
    }
};

// --------------------------- TABULATION ---------------------

class TabSolution {
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int n = Grid.size();
        int m = Grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(Grid[i][j] == 1) dp[i][j] = 0;
                else if(i==0 && j==0) dp[i][j] = 0;
                else {
                    int up = 0, left = 0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];

                    dp[i][j] = up + left;
                }
            }
        }
        return dp[n-1][m-1];
    }
};

// ---------------------- Space Optimization ------------------

class TabSolution {
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int n = Grid.size();
        int m = Grid[0].size();
        vector<int> prev(m, 0);

        for(int i = 0; i < n; i++) {
            vector<int> cur(m, 0);
            for(int j = 0; j < m; j++) {
                if(Grid[i][j] == 1) cur[j] = 0;
                else if(i==0 && j==0) cur[j] = 0;
                else {
                    int up = 0, left = 0;
                    if(i>0) up = prev[j];
                    if(j>0) left = cur[j-1];

                    cur[j] = up + left;
                }
            }
            prev = cur;
        }
        return prev[n-1];
    }
};