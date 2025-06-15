class Solution {
    int fun(int i, int j, vector<int> &nums, vector<vector<int>>& dp) {
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int mx = -1e9;
        for(int ind = i; ind <= j; ind++) {
            int cost = nums[i-1] * nums[ind] * nums[j+1] + fun(i, ind-1, nums, dp) + fun(ind+1, j, nums, dp);
            mx = max(mx, cost); 
        }
        return dp[i][j] = mx;
    }
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return fun(1, n-2, nums, dp);
    }
};