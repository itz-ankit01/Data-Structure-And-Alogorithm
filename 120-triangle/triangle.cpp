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
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for(int i=0; i<n; i++) {
            for(int j=0; j<triangle[i].size(); j++) {
                dp[i][j] = triangle[i][j];
            }
        }

        for(int i=1; i<n; i++) {
            for(int j=0; j<triangle[i].size(); j++) {
                int c1 = INT_MAX, c2 = INT_MAX;
                if(i-1>=0 && dp[i-1][j] != INT_MAX)c1 = dp[i-1][j];
                if(j-1>=0)c2 = dp[i-1][j-1];
                dp[i][j] = dp[i][j] + min(c1,c2);
            }
        }

        int ans = INT_MAX;
        for(int i=0; i<triangle[n-1].size(); i++) {
            ans = min(ans, dp[n-1][i]);
        }
        return ans;
    }
};