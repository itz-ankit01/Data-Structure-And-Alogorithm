#include <bits/stdc++.h>
using namespace std;

class Solution {
    int f(int ind, vector<int>& coins, int tar, vector<vector<int>> &dp) {
        if(tar == 0) return 1;
        if(ind < 0) return 0;
        if(dp[ind][tar] != -1) return dp[ind][tar];
        
        int notTake = f(ind-1, coins, tar, dp);
        int take = 0;
        if(coins[ind] <= tar) {
            take = f(ind, coins, tar-coins[ind], dp);
        }
        return dp[ind][tar] = take + notTake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount +1 , -1));

        return f(n-1, coins, amount, dp);
    }
};


// ---------------------- Tabulation --------------------------

class Solution {
   
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount +1 , 0));

        // initialisation
        for(int i = 0; i <= amount; i++) {
            if(i % coins[0] == 0) dp[0][i] = 1;
        }

        for(int ind = 1; ind < n; ind++) {
            for(int tar = 0; tar <= amount; tar++) {
                int notTake = dp[ind-1][tar];
                int take = 0;
                if(coins[ind] <= tar) {
                    take = dp[ind][tar-coins[ind]];
                }
                dp[ind][tar] = take + notTake;
            }
        }
        return dp[n-1][amount];

    }
};

// ------------------ space ---------------------------------


class Solution {
   
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<int>prev(amount+1, 0);

        // initialisation
        for(int i = 0; i <= amount; i++) {
            if(i % coins[0] == 0) prev[i] = 1;
        }

        for(int ind = 1; ind < n; ind++) {
            vector<int>cur(amount+1, 0);
            for(int tar = 0; tar <= amount; tar++) {
                int notTake = prev[tar];
                int take = 0;
                if(coins[ind] <= tar) {
                    take = cur[tar-coins[ind]];
                }
                cur[tar] = take + notTake;
            }
            prev = cur;
        }
        return prev[amount];

    }
};