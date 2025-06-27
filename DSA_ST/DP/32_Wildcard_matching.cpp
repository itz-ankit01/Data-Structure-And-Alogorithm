#include <bits/stdc++.h>
using namespace std;



class Solution {
    bool isAllStars(string &s, int i) {
        for (int j = 0; j <= i; j++) {
            if (s[j] != '*') return false;
        }
        return true;
    }

    bool solve(string &s, string &p, int i, int j, vector<vector<int>> &dp) {
        if (i < 0 && j < 0) return true;
        if (i < 0 && j >= 0) return false;
        if (i >= 0 && j < 0) return isAllStars(p, i);

        if (dp[i][j] != -1) return dp[i][j];

        if (p[i] == s[j] || p[i] == '?') {
            return dp[i][j] = solve(s, p, i - 1, j - 1, dp);
        } else if (p[i] == '*') {
            return dp[i][j] = (solve(s, p, i - 1, j, dp) || solve(s, p, i, j - 1, dp));
        }

        return dp[i][j] = false;
    }

public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(s, p, n - 1, m - 1, dp);
    }
};


// -------------------------------- TABULATION ------------------------

class Solution {
    bool isAllStars(string &s, int i) {
        for (int j = 0; j <= i; j++) {
            if (s[j] != '*') return false;
        }
        return true;
    }

public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            if (isAllStars(p, i - 1)) dp[i][0] = 1;
            else break;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (p[i - 1] == s[j - 1] || p[i - 1] == '?') {
                    dp[i][j] = dp[i - 1][j - 1];
                } else if (p[i - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = 0;
                }
            }
        }

        return dp[n][m];
    }
};

