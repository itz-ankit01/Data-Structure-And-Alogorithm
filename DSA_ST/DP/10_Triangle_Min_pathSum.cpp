#include <bits/stdc++.h>
using namespace std;

// ------------------------ Recursion ---------------------

class Solution {
    int f(int i, int j, vector<vector<int>>& triangle ) {
        if(i == triangle.size()-1) return triangle[i][j];

        int down = triangle[i][j] + f(i+1, j, triangle);
        int right = triangle[i][j] + f(i+1, j+1, triangle);

        return min(down, right);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        return f(0, 0, triangle);
    }
};

// ---------------------- MEMOIZATION -------------------------

class Solution {
    int f(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>&dp) {
        if(i == triangle.size()-1) return triangle[i][j];

        if(dp[i][j] != -1) return dp[i][j];

        int down = triangle[i][j] + f(i+1, j, triangle, dp);
        int right = triangle[i][j] + f(i+1, j+1, triangle, dp);

        return dp[i][j] = min(down, right);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return f(0, 0, triangle, dp);
    }
};

// ------------------------------- TABULATION -------------------

