#include <bits/stdc++.h>
using namespace std;

// ----------------------- RECURSIVE --------------------------

class Solution {
    bool f(int ind, int target, vector<int> &nums) {
        if(target == 0) return true;
        if(ind == 0) return nums[0] == target;

        bool notTake = f(ind - 1, target, nums);
        bool take = false;
        if(target >= nums[ind]) take = f(ind-1, target-nums[ind], nums);

        return take | notTake;
    }
  public:
    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        return f(n-1, target, arr);
    }
};

// ------------------------- MEMOIZATION --------------------------

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
    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));

        return f(n-1, target, arr, dp);
    }
};


// --------------------- TABULATION --------------

class Solution {
   
  public:
    bool isSubsetSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<bool>> dp(n, vector<bool>(target+1, 0));

        for(int i = 0; i < n; i++) dp[i][0] = true;
        dp[0][arr[0]] = true;

        for(int i = 1; i < n; i++) {
            for(int j = 0 ;  j <= target; j++) {
                bool notTake = dp[i - 1][target];
                bool take = false;
                if(j >= arr[i]) take =dp[i-1][j-arr[i]];

                dp[i][j] = take | notTake;
            }
        }
        return dp[n-1][target];
    }
};