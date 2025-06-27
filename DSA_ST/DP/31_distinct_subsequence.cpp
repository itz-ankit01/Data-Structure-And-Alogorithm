#include <bits/stdc++.h>
using namespace std;

class Solution {
    long long solve(string &s, string &t, int i, int j, vector<vector<long long>> &dp) {
        if (j < 0) return 1;
        if (i < 0) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (s[i] == t[j]) {
            return dp[i][j] = solve(s, t, i-1, j-1, dp) + solve(s, t, i-1, j, dp);
        } else {
            return dp[i][j] = solve(s, t, i-1, j, dp);
        }
    }
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<vector<long long>> dp(n, vector<long long>(m, -1));
        return solve(s, t, n-1, m-1, dp);
    }
};


/* ------------------- TABULATION ------------------------------*/

class Solution {
    public:
        int numDistinct(string s, string t) {
            int n = s.size();
            int m = t.size();
            const int MOD = INT_MAX;
    
            vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
    
            for (int i = 0; i <= n; i++) {
                dp[i][0] = 1; // empty t can be formed from any prefix of s
            }
    
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    if (s[i - 1] == t[j - 1]) {
                        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
                    } else {
                        dp[i][j] = dp[i - 1][j] % MOD;
                    }
                }
            }
    
            return dp[n][m];
        }
    };
    
