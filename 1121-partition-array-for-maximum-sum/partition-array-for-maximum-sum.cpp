class Solution {
    int fun(int i, vector<int>&nums, int k, vector<int>&dp) {
        if(i == nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int maxi = -1e9;
        int el = 0;
        for(int j=i; j < min((int)nums.size(), i + k);  j++) {
            el = max(el, nums[j]);
            int sum = (j - i + 1) * el + fun(j+1, nums, k, dp);
            maxi = max(maxi, sum); 
        }
        return dp[i] =  maxi;
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1, -1);
        return fun(0, arr, k, dp);
    }
};