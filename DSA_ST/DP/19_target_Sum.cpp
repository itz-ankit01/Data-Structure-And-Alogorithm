#include <bits/stdc++.h>
using namespace std;

class Solution {
    int f(int ind, vector<int>& nums, int tar, vector<vector<int>>& dp) {
        if (ind == 0) {
            if (tar == 0 && nums[0] == 0) return 2; // Two ways: +0 and -0
            if (tar == nums[0] || tar == 0) return 1;
            return 0;
        }
        if (dp[ind][tar] != -1) return dp[ind][tar];

        int notPick = f(ind - 1, nums, tar, dp);
        int pick = 0;
        if (nums[ind] <= tar) {
            pick = f(ind - 1, nums, tar - nums[ind], dp);
        }
        return dp[ind][tar] = pick + notPick;
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if ((sum - target) % 2 != 0 || sum < target) return 0;
        int k = (sum - target) / 2;

        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        return f(n - 1, nums, k, dp);
    }
};
