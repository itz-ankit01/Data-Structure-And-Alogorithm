class Solution {
    int f(int ind, vector<int>& coins, int tar, vector<vector<int>> &dp) {
        if(ind == 0) {
            if(tar % coins[0] == 0) {
                return tar/coins[0];
            } else return 1e9;
        }
        if(dp[ind][tar] != -1) return dp[ind][tar];

        
        int take = 1e9;
        if(coins[ind] <= tar) {
            take = 1 + f(ind, coins, tar-coins[ind], dp);
        }
        int notTake = 0 + f(ind-1, coins, tar, dp);

        return dp[ind][tar] = min(take, notTake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, INT_MAX));
        
        for(int i=0; i<=n; i++) {
            dp[i][0] = 0;
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j <= amount; j++) {
                if(coins[i-1] <= j && dp[i][j-coins[i-1]] != INT_MAX) {
                    dp[i][j] = min(1 + dp[i][j-coins[i-1]] , dp[i-1][j]);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }

        if(dp[n][amount] == INT_MAX) return -1;
        return dp[n][amount];
    }
};