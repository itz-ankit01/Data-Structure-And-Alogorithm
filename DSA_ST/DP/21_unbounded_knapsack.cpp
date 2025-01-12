#include <bits/stdc++.h>
using namespace std;

// --------------- Memoization ------------------------

class solution {
    int f(int ind, vector<int>& val, vector<int>& wt, int W, vector<vector<int>> &dp) {
        if(ind == 0) {
            if(wt[0] <= W) return (W/wt[0]) * val[0];
            else return 0;
        }
        if(dp[ind][W] != -1) return dp[ind][W];
        
        int notTake = f(ind-1, val, wt, W, dp);
        int take = INT_MIN;
        if(wt[ind] <= W) {
            take = val[ind] + f(ind, val,wt,  W-wt[ind], dp);
        }
        return dp[ind][W] = max(take, notTake);
    } 
    
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        vector<vector<int>> dp(n, vector<int>(capacity+1, -1));
        return f(n-1, val, wt, capacity, dp);
    }
};

// ------------------------ Tabulation ---------------------------

class Solution {
    public:
    int knapSack(vector<int>& val, vector<int>& wt, int W) {
    int n = val.size();
    vector<vector<int>> dp(n, vector<int>(W + 1, 0));

    
    for (int i = 0; i <= W; i++) {
        if (i >= wt[0]) {
            dp[0][i] = (i / wt[0]) * val[0];  
        }
    }
    
    for (int ind = 1; ind < n; ind++) {
        for (int tar = 0; tar <= W; tar++) {
            int notTake = dp[ind - 1][tar];
            int take = INT_MIN;
            if (wt[ind] <= tar) {
                take = val[ind] + dp[ind][tar - wt[ind]]; 
            }
            dp[ind][tar] = max(take, notTake);
        }
    }

    return dp[n - 1][W];
    }
};