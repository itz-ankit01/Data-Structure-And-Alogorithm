class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        vector<int> dp(n, 1), cnt(n, 1);
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j] && dp[i] < 1 + dp[j]) {
                    dp[i] = 1 + dp[j];
                    cnt[i] = cnt[j];
                }
                else if(nums[i] > nums[j] && dp[i] == 1 + dp[j]) {
                    cnt[i] += cnt[j];
                }
            }
            mx = max(mx, dp[i]);
        }

        int ans = 0;
        for(int i=0; i<n; i++) {
            if(dp[i] == mx) ans += cnt[i];
        }

        return ans;
    }
};