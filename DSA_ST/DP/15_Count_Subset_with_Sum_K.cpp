#include <bits/stdc++.h>
using namespace std;

// ------------ RECURSION --------------------------

class solution {

    int f(int ind, vector<int>& arr, int target) {
        // BC
        if(target == 0) return 1;
        if(ind == 0) (arr[0] == target) ? 1 : 0;

        int notTaken = f(ind-1, arr, target);
        int taken = 0;
        if(arr[ind] <= target) {
            taken = f(ind-1, arr, target-arr[ind]);
        }

        return taken + notTaken;
    }

    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        return f(n-1, arr, target);
    }
};


// ------------ MEMOIZATION --------------------------

class solution {

    int f(int ind, vector<int>& arr, int target, vector<vector<int>> &dp) {
        // BC
        
        if(ind == 0) {
            if(target==0 && arr[0]==0)
                return 2;
            if(target==0 || target == arr[0])
                return 1;
            return 0;
        }

        if(dp[ind][target] != -1) return dp[ind][target];

        int notTaken = f(ind-1, arr, target, dp);
        int taken = 0;
        if(arr[ind] <= target) {
            taken = f(ind-1, arr, target-arr[ind], dp);
        }

        return dp[ind][target] = taken + notTaken;
    }

    int perfectSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target+1, -1));
        return f(n-1, arr, target, dp);
    }
};


// -------------------------------- TABULATION ---------------------------


class solution {

    int perfectSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(sum + 1, 0));
        
        for(int i = 0; i<n; i++){
            dp[i][0] = 1;
        }
        for(int i =1; i<=n; i++){
            for(int j=0; j<=sum; j++){
                dp[i][j] = dp[i-1][j];
                if(arr[i-1]<=j) dp[i][j] += dp[i-1][j-arr[i-1]];
            }
        }
        return dp[n][sum];
    }
};



// -------------------------------- SPACE OPTIMISATION ---------------------------


class solution {

    int perfectSum(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> prev(k + 1, 0);

    prev[0] = 1;

    if (arr[0] <= k) {
        prev[arr[0]] += 1;  
    }

    for (int ind = 1; ind < n; ind++) {
        vector<int> cur(k + 1, 0);

        cur[0] = 1;  

        for (int target = 0; target <= k; target++) {
            int notTaken = prev[target];
            int taken = 0;
            if (arr[ind] <= target) {
                taken = prev[target - arr[ind]];
            }

            cur[target] = notTaken + taken;
        }

        prev = cur;
    }
    return prev[k];
    }
};


