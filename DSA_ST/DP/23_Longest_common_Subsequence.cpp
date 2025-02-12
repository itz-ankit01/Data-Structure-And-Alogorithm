#include <bits/stdc++.h>
using namespace std;

// ----------------------------- MEMOIZATION ----------------------

class Solution {
    int lcs(int n, int m, string text1, string text2, vector<vector<int>> &dp) {
        // Base Case
        if(n < 0 || m < 0) return 0;

        if(dp[n][m] != -1) return dp[n][m];

        if(text1[n] == text2[m]) {
            return dp[n][m] = 1 + lcs(n-1, m-1, text1, text2, dp);
        } else {
            return dp[n][m] = max(lcs(n, m-1, text1, text2, dp), lcs(n-1, m, text1, text2, dp));
        }
        return dp[n][m];
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return lcs(n-1, m-1, text1, text2, dp);
    }
};

// ------------------------ TABULATION ----------------------------

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0)); 
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[n][m];
    }
};

// -------------------------- SPACE ------------------------


class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<int>prev(m+1, 0), cur(m+1, 0); 
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    cur[j] = 1 + prev[j - 1];
                } else {
                    cur[j] = max(prev[j], cur[j - 1]);
                }
            }
            prev = cur;
        }
        return prev[m];
    }
};
