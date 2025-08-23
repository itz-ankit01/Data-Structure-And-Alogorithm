class Solution {
    int f(int i, int j, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp) {
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int up = 0, left = 0;
        if(i>0 && obstacleGrid[i-1][j] == 0) {
            up = f(i-1, j, obstacleGrid, dp);
        }
        if(j>0 && obstacleGrid[i][j-1] == 0) {
            left = f(i, j-1, obstacleGrid, dp);
        }
        return dp[i][j] = up + left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, 0));

        if(obstacleGrid[0][0] == 1) return 0;
        dp[0][0] = 1;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i==0 && j==0) continue;
                int c1 = 0;
                int c2 = 0;
                if(obstacleGrid[i][j] == 0) {
                    if(i-1>=0)c1 = dp[i-1][j];
                    if(j-1>=0)c2 = dp[i][j-1];
                }
                dp[i][j] = c1 + c2;
            }
        }
        return dp[n-1][m-1];
    }
};