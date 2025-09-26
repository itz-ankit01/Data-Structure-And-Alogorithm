class Solution {
    int mod = 1000000009;
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dp = grid;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i==0 && j==0) continue;
                int c1 = mod, c2 = mod;
                if(i-1 >= 0)c1 = dp[i-1][j];
                if(j-1 >=0) c2 = dp[i][j-1];

                dp[i][j] += min(c1,c2);
            }
        }
        return dp[n-1][m-1];
    }
};