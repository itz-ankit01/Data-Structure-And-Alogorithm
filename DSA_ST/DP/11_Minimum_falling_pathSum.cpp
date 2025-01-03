#include <bits/stdc++.h>
using namespace std;

// ----------------- MEMOIZATION -------------------------

class Solution {
    int mod = 100000007;
    int f(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp) {
        if(i == matrix.size()-1) return matrix[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        
        int mini = mod;
            int left = mod, down = mod, right = mod;
            if(j > 0) left = matrix[i][j] + f(i+1, j-1, matrix, dp);
            if(j+1 < matrix.size()) right = matrix[i][j] + f(i+1, j+1, matrix, dp);
            down = matrix[i][j] + f(i+1, j, matrix, dp);

            mini = min(down, min(left, right));
        
        return dp[i][j] = mini;
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            ans = min(ans, f(0, i, matrix, dp));
        }
        return ans;
    }
};

// --------------------------- TABULATION -----------------------

class Solution {
    int mod = 100000007;
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n));

        // Base Case
        for(int j = 0; j < n; j++) dp[0][j] = matrix[0][j];
        
        int mini = mod;
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < n; j++) {

                int down = matrix[i][j] + dp[i-1][j];

                int left = matrix[i][j];
                if(j > 0) left += dp[i-1][j-1];
                left += mod;

                int right = matrix[i][j];
                if(j+1 < n) right += dp[i-1][j+1];
                right += mod;

                dp[i][j] = min({down, left, right});
            }
        }
        int ans = dp[n-1][0];
        for(int i = 1; i < n; i++) {
            ans = min(ans, dp[n-1][i]);
        }
        return ans;
    }
};

// ----------------------- SPACE -------------------------

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> prev(n, 0);

        // Initialize the base case
        for (int j = 0; j < n; j++) prev[j] = matrix[0][j];

        for (int i = 1; i < n; i++) {
            vector<int> curi(n, 0);
            for (int j = 0; j < n; j++) {
                int down = matrix[i][j] + prev[j];
                int left = (j > 0) ? matrix[i][j] + prev[j - 1] : INT_MAX;
                int right = (j + 1 < n) ? matrix[i][j] + prev[j + 1] : INT_MAX;

                curi[j] = min({down, left, right});
            }
            prev = curi;
        }

        // Return the minimum value in the last row
        return *min_element(prev.begin(), prev.end());
    }
};
