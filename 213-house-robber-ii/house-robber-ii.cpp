class Solution {
    int houseRobber(int ind, vector<int>& nums, vector<int>& dp) {
        if (ind == 0) return nums[0];
        if (ind < 0) return 0;

        if (dp[ind] != -1) return dp[ind];

        int take = nums[ind] + houseRobber(ind - 2, nums, dp);
        int notTake = 0 + houseRobber(ind - 1, nums, dp);

        return dp[ind] = max(take, notTake);
    }

    int fun(vector<int>&nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for(int i=1; i<n; i++) {
            if(i-2>=0) {
                dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
            }
            else dp[i] = max(dp[i-1], nums[i]);
        }
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        vector<int> temp1, temp2;
        for (int i = 0; i < n; i++) {
            if (i != 0) temp1.push_back(nums[i]);
            if (i != n - 1) temp2.push_back(nums[i]);
        }

       

        return max(fun(temp1), fun(temp2));
    }
};
