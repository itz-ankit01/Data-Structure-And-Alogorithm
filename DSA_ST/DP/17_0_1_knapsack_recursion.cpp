#include <bits/stdc++.h>
using namespace std;

// ---------------------- RECURSION --------------------

class solution {
    int f(int ind, vector<int>&wt, vector<int> &val, int cap, vector<vector<int>> &dp) {
        // Base case
        if(ind < 0) return 0;

        if(dp[ind][cap] != -1) return dp[ind][cap];

        if(wt[ind] <= cap) {
            return dp[ind][cap] = max((val[ind] + f(ind-1, wt, val, cap-wt[ind], dp)), f(ind-1, wt, val, cap, dp));
        } else {
            return dp[ind][cap] = f(ind-1, wt, val, cap, dp);
        }
        return dp[ind][cap];
    }
    int boundedKnapsack(vector<int>&weight, vector<int> &val, int tar) {
        int n = weight.size();
        vector<vector<int>> dp(n, vector<int>(tar+1, -1));
        return f(n-1, weight, val, tar, dp);
    }
};

// ----------------------- Tabulation --------------------------

class Solution {
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = wt.size();
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0)); 

        for (int i = 1; i <= n; i++) {  
            for (int w = 1; w <= W; w++) { 
                if (wt[i - 1] <= w)
                    dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
                else
                    dp[i][w] = dp[i - 1][w];
            }
        }
        return dp[n][W];
    }
};


// -------------------------- space --------------------------

class solution {
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = wt.size();
        
        vector<int> prev(W + 1, 0);

        for (int i = 1; i <= n; i++) {  // Start loop from 1 to n
            vector<int> cur(W + 1, 0);
            for (int w = 0; w <= W; w++) {
                if (wt[i - 1] <= w)
                    cur[w] = max(val[i - 1] + prev[w - wt[i - 1]], prev[w]);
                else
                    cur[w] = prev[w];
            }
            prev = cur;
        }
        return prev[W];
    }
};
