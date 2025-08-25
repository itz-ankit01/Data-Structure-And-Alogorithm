class Solution {
    int solve(vector<int>& prices, int ind, int buy, vector<vector<int>> &dp) {
        if(ind == prices.size()) return 0;

        if(dp[ind][buy] != -1) return dp[ind][buy];

        if(buy) {
            int take = -prices[ind] + solve(prices, ind+1, 0, dp);
            int skip = solve(prices, ind+1, 1, dp);
            return dp[ind][buy] =  max(take, skip);
        } else {
            int sell = prices[ind] + solve(prices, ind+1, 1, dp);
            int skip = solve(prices, ind+1, 0, dp);
            return dp[ind][buy] = max(sell, skip);
        }
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];

        for(int i=1; i<n; i++) {
            for(int buy=0; buy<2; buy++) {
                if(buy == 1) {
                    dp[i][buy] = max(-prices[i]+dp[i-1][0] , dp[i-1][1]);
                }
                else {
                    dp[i][buy] = max(prices[i] + dp[i-1][1], dp[i-1][0]);
                }
            }
        }

        return dp[n-1][0];
    }
};
