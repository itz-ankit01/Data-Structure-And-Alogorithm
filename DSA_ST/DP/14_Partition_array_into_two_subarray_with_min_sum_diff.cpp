#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool f(int ind, int target, vector<int> &nums, vector<vector<int>> &dp) {
        if(target == 0) return true;
        if(ind == 0) return nums[0] == target;

        if(dp[ind][target] != -1) return dp[ind][target];
        bool notTake = f(ind - 1, target, nums, dp);
        bool take = false;
        if(target >= nums[ind]) take = f(ind-1, target-nums[ind], nums, dp);

        return dp[ind][target] = take | notTake;
    }
    
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size();

        int totalSum = 0;
        for(int i=0; i<n; i++) totalSum += nums[i];

        vector<vector<int>> dp(n+1, vector<int>(totalSum + 1, -1));
        int mini = INT_MAX;
        for(int i = 0; i <= totalSum/2; i++) {
            if(dp[n-1][i] == true) {
                mini = min(mini, abs((totalSum - i) - i));
            }
        }
        return mini;
    }
};
