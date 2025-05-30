class Solution {
    int fun(vector<int>& nums, int ind, int prev, vector<vector<int>>&dp) {
        if(ind == nums.size()) {
            return 0;
        }

        if(prev != -1 && dp[ind][prev] != -1) return dp[ind][prev];

        int take = 0;
        if(prev == -1 || nums[prev] < nums[ind]) {
            take = 1 + fun(nums, ind+1, ind, dp);
        }

        int skip = fun(nums, ind+1, prev, dp);

        if(prev != -1) {
            dp[ind][prev] = max(skip, take);
        }

        return max(skip, take);

    }
        
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        for(int ind = n-1; ind >=0 ; ind--){
            for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--) {
                int skip = 0 + dp[ind+1][prev_ind+1];
                int take = 0;
                if(prev_ind == -1 || nums[ind] > nums[prev_ind]) {
                    take = 1 + dp[ind+1][ind+1];
                }
                dp[ind][prev_ind+1] = max(take, skip);
            }
        }
        return dp[0][-1+1];
    }
};
