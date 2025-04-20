class Solution {
    int solve(vector<int>& nums, int ind, int last ,vector<vector<int>>& dp) {
        if(ind == nums.size()) return 0;

        if(dp[ind][last+1] != -1) return dp[ind][last+1];

        int take = 0;
        if(last == -1 || nums[ind] > nums[last]) {
            take = 1 + solve(nums, ind+1, ind, dp);
        }

        int skip = solve(nums, ind+1, last, dp);

        return dp[ind][last+1] = max(take, skip);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0)); 
        
        for(int i = n-1; i>=0; i--) {
            for(int j = i - 1; j >= -1; j--) {
                int take = 0;
                if(j == -1 || nums[i] > nums[j]) {
                    take = 1 + dp[i+1][i+1];
                }

                int skip = dp[i+1][j+1];

                 dp[i][j+1] = max(take, skip);
            }
        }

        return dp[0][0];
    }
};
