class Solution {
    int f(int ind, vector<int>& nums, int tar, vector<vector<int>>& dp) {
        if (ind == 0) {
            if (tar == 0 && nums[0] == 0) return 2; // Two ways: +0 and -0
            if (tar == nums[0] || tar == 0) return 1;
            return 0;
        }
        if (dp[ind][tar] != -1) return dp[ind][tar];

        int notPick = f(ind - 1, nums, tar, dp);
        int pick = 0;
        if (nums[ind] <= tar) {
            pick = f(ind - 1, nums, tar - nums[ind], dp);
        }
        return dp[ind][tar] = pick + notPick;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if ((sum - target) % 2 != 0 || sum < target) return 0;
        int k = (sum - target) / 2;

        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(k + 1, 0));

        int cnt = 1;
        for(int i=0; i<=n; i++) {
            if(i-1>=0 && nums[i-1]==0) cnt *=2;
            dp[i][0] = cnt;
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=k; j++) {
                if(nums[i-1] <= j) {
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][k];
        
    }
};
