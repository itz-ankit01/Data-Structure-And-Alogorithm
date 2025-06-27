#include <bits/stdc++.h>
using namespace std;


// ----------------------- MEMOIZATION -------------------------------

class Solution {
    int solve(string &word1, string &word2, int i, int j, vector<vector<int>> &dp) {
        if (j < 0) return i + 1;  // Delete remaining i+1 characters from word1
        if (i < 0) return j + 1;  // Insert remaining j+1 characters from word2

        if(dp[i][j] != -1) return dp[i][j];


        if(word1[i] == word2[j]) {
            return dp[i][j] =  solve(word1, word2, i-1, j-1, dp);
        } else {
            return dp[i][j] =  1 + min({solve(word1, word2, i-1, j, dp), solve(word1, word2, i-1, j-1, dp), solve(word1, word2, i, j-1, dp)});
        }
    }
public:
    int minDistance(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int ans = solve(word1, word2, n-1, m-1, dp);
        return ans;
    }
};

// --------------------------------- TABULATION ------------------------------

class Solution {
    
    public:
        int minDistance(string word1, string word2) {
    
            int n = word1.size();
            int m = word2.size();
            vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
            
            // initialization
    
            for(int i = 0; i <= n; i++) dp[i][0] = i;
            for(int i = 0; i <= m; i++) dp[0][i] = i;
    
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= m; j++) {
                    if(word1[i-1] == word2[j-1]) {
                        dp[i][j] = dp[i-1][j-1];
                    } else {
                        int insertOp = dp[i][j-1];
                        int deleteOp = dp[i-1][j];
                        int replaceOp = dp[i-1][j-1];
                        dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
                    }
                }
            }
            return dp[n][m];
        }
    };