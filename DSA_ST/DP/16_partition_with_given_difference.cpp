#include <bits/stdc++.h>
using namespace std;

class solution {
    int f(int ind, vector<int> &nums, vector<vector<int>> &dp, int k) {
        if(ind == 0) {
            if(k == 0 && nums[0]==0) return 2;
            if(k == 0 || nums[0] == k) return 1;
            return 0;
        }
        
        if(dp[ind][k] != -1) return dp[ind][k];
        
        int notTake = f(ind-1, nums, dp, k);
        int take = 0;
        if(nums[ind] <= k) {
            take = f(ind-1, nums, dp, k-nums[ind]);
        }
        return dp[ind][k] = take + notTake;
    }
  public:
    int countPartitions(vector<int>& arr, int d) {
        
        int n = arr.size();
        int sum = 0;
        for(auto it: arr) sum += it;
        if (sum < d || (sum - d) % 2 != 0) return 0; 
        int k = (sum - d) / 2;
        
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        return f(n - 1, arr, dp, k);
        
    }
};


//v---------------------------------- TABULATION ----------------------------

class Solution {
  public:
    int countPartitions(vector<int>& arr, int d) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);

        if (sum < d || (sum - d) % 2 != 0) return 0; 
        int k = (sum - d) / 2;

        vector<vector<int>> dp(n, vector<int>(k + 1, 0));

        for(int i = 0; i < n; i++) {
            if(arr[0] == 0) dp[i][0] = 2;
            else dp[i][0] = 1;
        }
        if (arr[0] <= k && arr[0] != 0) dp[0][arr[0]] = 1;


        for (int ind = 1; ind < n; ind++) {
            for (int target = 0; target <= k; target++) {
                int notTake = dp[ind - 1][target];
                int take = 0;
                if (arr[ind] <= target) {
                    take = dp[ind - 1][target - arr[ind]];
                }
                dp[ind][target] = notTake + take;
            }
        }

        return dp[n - 1][k];
    }
};

// ------------------------------ SPACE OPTIMISATION -------------------


class Solution {
  public:
    int countPartitions(vector<int>& arr, int d) {
        int n = arr.size();
        int sum = accumulate(arr.begin(), arr.end(), 0);

        if (sum < d || (sum - d) % 2 != 0) return 0; 
        int k = (sum - d) / 2;

        vector<int> prev(k+1, 0);
        if(arr[0] == 0) prev[0] = 2;
        else prev[0] = 1;

        if(arr[0] != 0 && arr[0] <= k) {
            prev[arr[0]] = 1; 
        }
        for(int ind = 1; ind < n; ind++) {
            vector<int> cur(k+1, 0);
            for(int target = 0; target <= k; target++) {
                int notTake = prev[target];
                int take = 0;
                if(arr[ind] <= target) {
                    take = prev[target-arr[ind]];
                }
                cur[target] = take + notTake;
            }
            prev = cur;
        }
        return prev[k];
    }
};


