class Solution {
    int solve(vector<int>& prices, int ind, int buy, int cap, vector<vector<vector<int>>>& dp) {
        if(ind == prices.size() || cap == 0) return 0;

        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];

        if(buy) {
            int take = -prices[ind] + solve(prices, ind+1, 0, cap, dp);
            int skip = solve(prices, ind+1, 1, cap, dp);
            return dp[ind][buy][cap] = max(take, skip);
        } else {
            int sell = prices[ind] + solve(prices, ind+1, 1, cap-1, dp);
            int skip = solve(prices, ind+1, 0, cap, dp);
            return dp[ind][buy][cap] = max(sell, skip);
        }
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(k+1, 0)));
        // return solve(prices, 0, 1, k, dp);

        for(int i=n-1; i>=0; i--) {
            for(int buy = 0; buy < 2; buy++) {
                for(int cap=1; cap <= k; cap++) {
                    if(buy) {
                        dp[i][buy][cap] = max(-prices[i] + dp[i+1][0][cap], dp[i+1][1][cap]);
                    }
                    else {
                        dp[i][buy][cap] = max(prices[i] + dp[i+1][1][cap-1], dp[i+1][0][cap]);
                    }
                }
            }
        }

        return dp[0][1][k];
    }
};
