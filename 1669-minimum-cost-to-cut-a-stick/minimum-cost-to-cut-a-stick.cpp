class Solution {
    long long int fun(int i, int j, vector<int>& cuts, vector<vector<long long>> &dp) {
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        long long int mn = 1e9;
        for(int ind = i; ind <= j; ind++) {
            long long int cost = cuts[j+1] - cuts[i-1] + fun(i, ind-1, cuts, dp) + fun(ind+1, j, cuts, dp);
            mn = min(mn, cost);
        }
        return dp[i][j] = mn;

    }
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.insert(cuts.begin(), 0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        int m = cuts.size();
        vector<vector<long long>> dp(m+2, vector<long long>(m+2, -1));
        return fun(1, m-2, cuts, dp);
    }
};