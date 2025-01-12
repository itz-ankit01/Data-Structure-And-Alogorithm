#include <bits/stdc++.h>
using namespace std;

// --------------------------- Memoization  -----------------------

class solution
{
    int f(int ind, vector<int> &price, int tar, vector<vector<int>> &dp)
    {

        if (ind == 0)
        {
            return tar * price[0];
        }

        if (dp[ind][tar] != -1)
        {
            return dp[ind][tar];
        }

        int notTake = f(ind - 1, price, tar, dp);
        int take = INT_MIN;
        if (ind + 1 <= tar)
        {
            take = price[ind] + f(ind, price, tar - (ind + 1), dp);
        }
        dp[ind][tar] = max(take, notTake);
        return dp[ind][tar];
    }

public:
    int cutRod(vector<int> &price)
    {
       
        int n = price.size();
        int tar = n;
        vector<vector<int>> dp(n, vector<int>(tar + 1, -1));
        return f(n - 1, price, tar, dp);
    }
};



// --------------------------------- Tabulation --------------------------------


class solution {
public:
    int cutRod(vector<int> &price) {
       
        int n = price.size();
        int tar = n;
        vector<vector<int>> dp(n, vector<int>(tar + 1, 0));

        for(int i = 0; i <= tar; i++) {
            dp[0][i] = i * price[0];
        }

        for(int ind = 1; ind < n; ind++) {
            for(int k = 0; k <= tar; k++) {

                int notTake = dp[ind - 1][k];
                int take = INT_MIN;
                if (ind + 1 <= k)
                {
                    take = price[ind] + dp[ind][k - (ind + 1)];
                }
                dp[ind][k] = max(take, notTake);
                
            }
        }
        return dp[n-1][tar];
    }
};
