class Solution {
    int houseRobber(int ind, vector<int>&nums, vector<int>&dp) {
        if(ind == 0) return nums[0];
        if(ind < 0) return 0;

        if(dp[ind] != -1) return dp[ind];

        int take = nums[ind] + houseRobber(ind-2, nums, dp);
        int notTake = 0 + houseRobber(ind-1, nums, dp);

        return dp[ind] = max(take, notTake);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];

        for(int i=1; i<n; i++) {
            if(i-2>=0)dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
            else dp[i] = max(nums[i], dp[i-1]);
        }

        return dp[n-1];


    }
};