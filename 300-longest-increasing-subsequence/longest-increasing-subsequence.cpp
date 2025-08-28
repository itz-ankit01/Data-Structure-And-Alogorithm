class Solution {
    int fun(vector<int>& nums, int ind, int prev, vector<vector<int>>&dp) {
        // if(ind == nums.size()) {
        //     return 0;
        // }

        // if(prev != -1 && dp[ind][prev] != -1) return dp[ind][prev];

        // int take = 0;
        // if(prev == -1 || nums[prev] < nums[ind]) {
        //     take = 1 + fun(nums, ind+1, ind, dp);
        // }

        // int skip = fun(nums, ind+1, prev, dp);

        // if(prev != -1) {
        //     dp[ind][prev] = max(skip, take);
        // }

        // return max(skip, take);

        if(ind < 0) return 0;

        if(dp[ind][prev] != -1 && prev != INT_MAX) return dp[ind][prev]; 

        int notTake = fun(nums, ind - 1, prev, dp);
        int take = INT_MIN;
        if(prev == INT_MAX || nums[ind] < prev) take = max(take, 1 + fun(nums, ind-1, ind, dp));
        if(prev != INT_MAX) {
            dp[ind][prev] = max(take, notTake);
        }

        return max(take, notTake);

    }
        
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> dp(n, vector<int>(n, -1));

        // for(int ind = n-1; ind >=0 ; ind--){
        //     for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--) {
        //         int skip = 0 + dp[ind+1][prev_ind+1];
        //         int take = 0;
        //         if(prev_ind == -1 || nums[ind] > nums[prev_ind]) {
        //             take = 1 + dp[ind+1][ind+1];
        //         }
        //         dp[ind][prev_ind+1] = max(take, skip);
        //     }
        // }
        // return dp[0][-1+1];

        // return fun(nums, n-1, INT_MAX, dp);

        // vector<int> tmp;
        // tmp.push_back(nums[0]);
        // int len = 1;
        // for(int i=1; i<n; i++) {
        //     if(tmp.back() < nums[i]) {
        //         tmp.push_back(nums[i]);
        //         len++;
        //     }
        //     else {
        //         int ind = lower_bound(tmp.begin(), tmp.end(), nums[i]) - tmp.begin();
        //         tmp[ind] = nums[i];
        //     }
        // }
        // return len;


        vector<int> dp(n, 1);

        int mx = 0;

        for(int i=0; i<n; i++) {
            int ans = 1;
            for(int j=0; j<i; j++) {
                if(nums[i] > nums[j]) ans = max(ans, 1 + dp[j]);
            }
            dp[i] = ans;
            mx = max(mx, ans);
        }



        return mx;



    }
};
