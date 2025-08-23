class Solution {
    bool EqualSumPartition(vector<int> &nums, int sum) {
        int n = nums.size();
        int dp[n+1][sum+1];
        for(int i = 0; i < n+1; i++) {
            for(int j = 0; j < sum + 1; j++) {
                if(i == 0) dp[i][j] = false;
                if(j == 0) dp[i][j] = true;
            }
        }

        for(int i = 1; i < n+1; i++) {
            for(int j = 1; j < sum+1; j++) {
                if(nums[i-1] <= j) {
                    dp[i][j] = dp[i-1][j - nums[i-1]] || dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(auto it: nums) sum += it;

        if(sum & 1) return false;

        int tar = sum/2;
        vector<vector<bool>> dp(n+1, vector<bool>(tar+1, false));

        for(int i=0; i<=n; i++) dp[i][0] = true;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=tar; j++) {
                if(nums[i-1] <= j) {
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][tar];
    }
};