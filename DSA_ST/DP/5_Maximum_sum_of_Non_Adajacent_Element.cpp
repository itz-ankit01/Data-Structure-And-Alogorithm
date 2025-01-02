#include <bits/stdc++.h>
using namespace std;

class RecursiveSolution {
    int houseRobber(int ind, vector<int>&nums) {
        if(ind == 0) return nums[0];
        if(ind < 0) return 0;

        int take = nums[ind] + houseRobber(ind-2, nums);
        int notTake = 0 + houseRobber(ind-1, nums);

        return max(take, notTake);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        return houseRobber(n-1, nums);
    }
};


class MemoizationSolution {
    int houseRobber(int ind, vector<int>&nums, vector<int> &dp) {
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
        vector<int> dp(n, -1);
        return houseRobber(n-1, nums, dp);
    }
};


class TabulationSolution {
    
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = nums[0];

        for(int i=1; i<n; i++) {
            int take = nums[i];
            if(i>1) take += dp[i-2];

            int notTake = 0 + dp[i-1];

            dp[i] = max(take, notTake);
        }
        return dp[n-1];
    }
};


class OptimisedTabulation {
    
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;

        for(int i=1; i<n; i++) {
            int take = nums[i];
            if(i>1) take += prev2;

            int notTake = 0 + prev;
            int curi = max(take, notTake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
};
